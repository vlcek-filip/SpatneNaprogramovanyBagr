#include <iostream>
#include <ctime>

using namespace std;

int zivoty;
int maxzivoty;
int zlato;
int utok;
int mana;
int maxmana;
string classa;
string volbaclassy;
int vyber;
int akce;
string pokracakce;


// VESNICE
void V(){
while(true){
cout << endl;
cout << "----------------------" << endl;
cout << "Lokace: Vesnice" << endl;
cout << endl;
cout << "Akce co muzete ve vesnici delat:" << endl;
cout << "1) Doplnit zivoty" << endl;
cout << "2) Vylepsit maximalni zivoty" << endl;
cout << "3) Vylepsit maximalni manu" << endl;
cout << "4) Vylepsit utok/schopnosti" << endl;
cout << "5) Opustit" << endl;
cout << "Jakou akci chcete vykonat?: ";
cin >> akce;
cout << endl;



    if(akce == 1){
        if(zlato >= 5){
            cout << "Tato akce stoji 5 zlata, chcete pokracovat? (ano/ne): ";
            cin >> pokracakce;
            if(pokracakce == "ano"){
                zlato -= 5;
                cout << "Zivoty doplneny. Nyni mate " << zlato << " zlata." << endl;
                }
            }else{
                cout << "Nemate dostatek zlata!" << endl;
            }
        }

    else if(akce == 2){
        if(zlato >= 10){
            cout << "Tato akce stoji 10 zlata, chcete pokracovat? (ano/ne): ";
            cin >> pokracakce;
            if(pokracakce == "ano"){
                zlato -= 10;
                cout << "Max. zivoty zvyseny. Nyni mate " << zlato << " zlata." << endl;
                }
            }else{
                cout << "Nemate dostatek zlata!" << endl;
            }
        }

    else if(akce == 3){
        if(zlato >= 20){
            cout << "Tato akce stoji 20 zlata, chcete pokracovat? (ano/ne): ";
            cin >> pokracakce;
            if(pokracakce == "ano"){
                zlato -= 20;
                cout << "Max. mana zvysena. Nyni mate " << zlato << " zlata." << endl;
                }
            }else{
                cout << "Nemate dostatek zlata!" << endl;
            }
        }

    else if(akce == 4){
        if(zlato >= 10){
            cout << "Tato akce stoji 10 zlata, chcete pokracovat? (ano/ne): ";
            cin >> pokracakce;
            if(pokracakce == "ano"){
                zlato -= 10;
                cout << "Utok vylepsen. Nyni mate " << zlato << " zlata." << endl;
                }
            }else{
                cout << "Nemate dostatek zlata!" << endl;
            }
        }

    else if(akce == 5){
        cout << "Opousteni vesnice..." << endl;
        cout << "----------------------" << endl;
        return;
    }
    else{
        cout << "Neplatna volba, vyberte prosim znovu." << endl;
        }
    }
}

int main(){

cout << "-=-=-=-=-=-VITEJ VE HRE-=-=-=-=-=-" << endl;
// POZNAMKA: nevedel jak jsem mel dat ze kdyz vyber nema hodnotu, tak aby ten cyklus bezel dokud int vyber nebude mit prirazenou hodnotu, zeptal jsem se na to AI.
while (!vyber){
cout << "Za jakou tridu budete chtit hrat? (Paladin, Lovec, Mag, Warlock): ";
cin >> classa;
cout << endl;


if (classa == "Paladin"){
    cout << "Vas vyber: " << classa << endl;
        maxzivoty = 5;
    cout << "----------------------" << endl;
    cout << "zivoty = 5/5" << endl;
        zivoty = 5;
    cout << "utok = 3" << endl;
        utok = 3;
    cout << "mana = 5" << endl;
        mana = 5;
    cout << "----------------------" << endl;

    }else if (classa == "Lovec"){
    cout << "Vas vyber: " << classa << endl;
        maxzivoty = 4;
    cout << "----------------------" << endl;
    cout << "zivoty = 4/4" << endl;
        zivoty = 4;
    cout << "utok = 3" << endl;
        utok = 4;
    cout << "mana = 2" << endl;
        mana = 2;
    cout << "----------------------" << endl;

    }else if (classa == "Mag"){
    cout << "Vas vyber: " << classa << endl;
       maxzivoty = 3;
    cout << "----------------------" << endl;
    cout << "zivoty = 3/3" << endl;
       zivoty = 3;
    cout << "utok = 3" << endl;
       utok = 4;
    cout << "mana = 10" << endl;
       mana = 10;
    cout << "----------------------" << endl;

    }else if (classa == "Warlock"){
    cout << "Vas vyber: " << classa << endl;
        maxzivoty = 7;
    cout << "----------------------" << endl;
    cout << "zivoty = 7/7" << endl;
        zivoty = 7;
    cout << "utok = 4" << endl;
        utok = 4;
    cout << "mana = 1" << endl;
        mana = 1;
    cout << "----------------------" << endl;


    }else{
        cout << "neplatny vyber, vyberte znovu" << endl;
    }

    cout << "chcete tuto class vybrat? ";
    cin >> volbaclassy;

    if (volbaclassy == "ano"){
        cout << "Class " << classa << " vybrana" << endl;
        vyber = 1;
        cout << "------------------------------------------------------------------" << endl;
    }
}


V();




}
