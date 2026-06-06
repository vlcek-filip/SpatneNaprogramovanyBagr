#include <iostream>
#include <ctime>
#include <cstdlib>

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
                cout << "Zivoty: " << zivoty << "/" << zivoty;
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
                int bonus = rand() % 9 + 1;
                maxzivoty += bonus;
                cout << "Zivoty: " << zivoty << "/" << maxzivoty;
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
                int bonus = rand() % 9 + 1;
                maxmana += bonus;
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
                int bonus = rand() % 9 + 1;
                utok += bonus;
                cout << "Poskozeni utokem: " << utok << endl;
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
// ------------------------------------------------------------------

// Monstrum
void M(){
int maxzivotyMonstra
int zivotyMonstra = 100;
int utokMonstra = 5;
cout << "----------------------" << endl;
cout << "Lokace: Souboj s monstrem" << endl;
cout << "Utok Monstra: -5 zivotu" << endl;
cout << "----------------------" << endl;
cout << "Monstrum: co tu chces?! Znicim te jestli se do 5 vterin neztratis!" << endl;
cout << classa << ": Nevim co si myslis ze jsi, dam te levou zadni." << endl;
cout << "Monstrum: Cha! Tak si to rozdame." << endl;

while (zivoty > 0 or zivotyMonstra > 0){
    cout << "----------------------" << endl;
    cout << "Zivoty Monstra: " << zivotyMonstra << "/" << zivotyMonstra << endl;
    cout << "Vase Zivoty: " << zivoty << "/" << zivotyMonstra << endl;
    cout << "----------------------" << endl;
    cout << "Monstrum vam chce zasadit zasah, co udelate?" << endl;
    cout << "1) Zautocite na monstrum";
    cout << "2) Uhnete (monstrum si nabije utok, ktery dava 2x vice poskozeni)";
    cout << "Vase volba: ";
    cin >> volba;
    if (volba == 1){
        cout << "Utok monstru ubral " << utok << "zivotu" << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty Monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
        cout << "Vase Zivoty: " << zivoty << "/" << zivotyMonstra << endl;
        cout << "----------------------" << endl;
        cout << "Monstrum se na vas nahnalo" << endl;
        cout << "1) Zautocite na monstrum (25% sance ze se utok na monstrum podari)";
        cout << "2) Uhnete (50% sance ze se uhnuti pred monstrem podari)";
        cout << "Vase volba: ";
        cin >> volba;
    }
    if (volba == 2){
        cout << "Monstrum vas minulo, ale nabilo si utok, ktery vam da 2x vice poskozeni." << endl;
        utokMonstra *= 2;
    }
}
}
// ------------------------------------------------------------------

// 2xMonstrum
void 2xM(){

}
// ------------------------------------------------------------------

// 3xMonstrum
void 3xM(){

}
// ------------------------------------------------------------------

// Mini Boss
void MB(){

}
// ------------------------------------------------------------------

// Hlavni Boss
void HB(){

}
// ------------------------------------------------------------------


int main(){

cout << "-=-=-=-=-=-VITEJ VE HRE-=-=-=-=-=-" << endl;
// POZNAMKA: nevedel jak jsem mel dat ze kdyz vyber nema hodnotu, tak aby ten cyklus bezel dokud int vyber nebude mit prirazenou hodnotu, zeptal jsem se na to AI.
while (!vyber){
cout << "Za jakou tridu budete chtit hrat? (Paladin, Lovec, Mag, Warlock): ";
cin >> classa;
cout << "----------------------" << endl;


if (classa == "Paladin"){
    cout << "Vas vyber: " << classa << endl;
        int maxzivoty = 5;
    cout << "----------------------" << endl;
    cout << "zivoty = 5/5" << endl;
        int zivoty = 5;
    cout << "utok = 3" << endl;
        int utok = 3;
    cout << "mana = 5" << endl;
        int mana = 5;
    cout << "----------------------" << endl;

    }else if (classa == "Lovec"){
    cout << "Vas vyber: " << classa << endl;
        int maxzivoty = 4;
    cout << "----------------------" << endl;
    cout << "zivoty = 4/4" << endl;
        int zivoty = 4;
    cout << "utok = 3" << endl;
        int utok = 4;
    cout << "mana = 2" << endl;
        int mana = 2;
    cout << "----------------------" << endl;

    }else if (classa == "Mag"){
    cout << "Vas vyber: " << classa << endl;
        int maxzivoty = 3;
    cout << "----------------------" << endl;
    cout << "zivoty = 3/3" << endl;
        int zivoty = 3;
    cout << "utok = 3" << endl;
        int utok = 4;
    cout << "mana = 10" << endl;
        int mana = 10;
    cout << "----------------------" << endl;

    }else if (classa == "Warlock"){
    cout << "Vas vyber: " << classa << endl;
        int maxzivoty = 7;
    cout << "----------------------" << endl;
    cout << "zivoty = 7/7" << endl;
        int zivoty = 7;
    cout << "utok = 4" << endl;
        int utok = 4;
    cout << "mana = 1" << endl;
        int mana = 1;
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
M();



}
