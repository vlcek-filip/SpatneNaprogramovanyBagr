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
int volba;
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
cout << "4) Vylepsit utok" << endl;
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
                zivoty = maxzivoty;
                cout << "Zivoty doplneny. Nyni mate " << zlato << " zlata." << endl;
                cout << "Zivoty: " << zivoty << "/" << zivoty;
                }
            }else{
                cout << "Nemate dostatek zlata!" << endl;
            }
        }

    else if(akce == 2){
        if(zlato >= 15){
            cout << "Tato akce stoji 15 zlata, chcete pokracovat? (ano/ne): ";
            cin >> pokracakce;
            if(pokracakce == "ano"){
                zlato -= 15;
                cout << "Max. zivoty zvyseny. Nyni mate " << zlato << " zlata." << endl;
                int bonus = rand() % 4 + 1;
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
                int bonus = rand() % 3 + 1;
                maxmana += bonus;
                cout << "Vase maximalni mana je: " << maxmana << endl;
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
                int bonus = rand() % 2 + 1;
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
        cout << endl;
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
int maxzivotyMonstra = 4;
int zivotyMonstra = 4;
int utokMonstra = 2;
cout << "----------------------" << endl;
cout << "Lokace: Souboj s monstrem" << endl;
cout << "Utok monstra: -2 zivoty" << endl;
cout << "----------------------" << endl;
cout << "Monstrum: co tu chces?! Znicim te jestli se do 5 vterin neztratis!" << endl;
cout << classa << ": Nevim co si myslis ze jsi, dam te levou zadni." << endl;
cout << "Monstrum: Cha! Tak si to rozdame." << endl;
cout << "----------------------" << endl;
cout << endl;

while (zivoty > 0 && zivotyMonstra > 0){
    cout << "Monstrum Vam zasadilo zasah" << endl;
    zivoty -= utokMonstra;
    cout << endl;
    cout << "----------------------" << endl;
    cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
    cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
    cout << "----------------------" << endl;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
    cout << "Monstrum Vam chce zasadit zasah, co udelate?" << endl;
    cout << "1) Zautocite na monstrum" << endl;
    cout << "2) Uhnete (monstrum si nabije utok, ktery dava 2x vice poskozeni)" << endl;
    cout << "Vase volba: ";
    cin >> volba;
    cout << endl;
    if (volba == 1){
        cout << "Utok monstru ubral " << utok << " zivotu" << endl;
        zivotyMonstra -= utok;
        cout << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        }
    }else if (volba == 2){
        cout << "Monstrum Vas minulo" << endl;
    }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (50% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (75% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 50){
                cout << "Monstrum Vas zasahlo" << endl;
                if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
            }else{
                cout << "Zasahli jste monstrum" << endl;
                zivotyMonstra -= utok;
                if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        } }
    }else if (volba == 2){
        cout << "Monstrum Vas minulo" << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            } }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (30% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (60% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 70){
                cout << "Monstrum Vas minulo" << endl;
                utokMonstra *= 2;
            }else{
                cout << "Monstrum Vas zasahlo" << endl;
                zivoty -= utokMonstra;
                if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
                }
            }
            }
        }
        }else if (volba == 2){
            cout << "Monstrum Vas minulo, ale nabilo si utok, ktery vam da 2x vice poskozeni." << endl;
}else{
    cout << "neplatny vstup, zadejte volbu znovu" << endl;
    cin >> volba;
} } }
    if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
} }
// ------------------------------------------------------------------

// 2xMonstrum
void M2x(){
int maxzivotyMonstra1 = 4;
int maxzivotyMonstra2 = 6;
int zivotyMonstra1 = 4;
int zivotyMonstra2 = 6;
int utokMonstra1 = 5;
int utokMonstra2 = 3;
cout << "----------------------" << endl;
cout << "Lokace: Souboj s monstrem" << endl;
cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
cout << "Utok monstra1 : -" << utokMonstra1 << "HP" << endl;
cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
cout << "Utok monstra2: -" << utokMonstra2 << "HP" << endl;
cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
cout << "----------------------" << endl;
cout << "Monstrum: co tu chces?! Znicim te jestli se do 5 vterin neztratis!" << endl;
cout << classa << ": Nevim co si myslis ze jsi, dam te levou zadni." << endl;
cout << "Monstrum: Cha! Tak si to rozdame." << endl;
cout << "----------------------" << endl;
cout << endl;

while (zivoty > 0 && (zivotyMonstra1 > 0 || zivotyMonstra2 > 0)){
    int utokKolo = 0;
    if (zivotyMonstra1 > 0){
        utokKolo = utokMonstra1;
    }else if (zivotyMonstra2 > 0){
        utokKolo = utokMonstra2;
    }

    cout << "Monstrum Vam zasadilo zasah" << endl;
    zivoty -= utokKolo;
    cout << endl;
    cout << "----------------------" << endl;
    cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
    cout << "Utok monstra1 : -" << utokMonstra1 << "HP" << endl;
    cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
    cout << "Utok monstra2: -" << utokMonstra2 << "HP" << endl;
    cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
    cout << "----------------------" << endl;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
    cout << "Monstrum Vam chce zasadit zasah, co udelate?" << endl;
    cout << "1) Zautocite na monstrum" << endl;
    cout << "2) Uhnete (monstrum si nabije utok, ktery dava 2x vice poskozeni)" << endl;
    cout << "Vase volba: ";
    cin >> volba;
    cout << endl;
    if (volba == 1){
        if (zivotyMonstra1 > 0){
            cout << "Utok monstru 1 ubral " << utok << " zivotu" << endl;
            zivotyMonstra1 -= utok;
        }else{
            cout << "Utok monstru 2 ubral " << utok << " zivotu" << endl;
            zivotyMonstra2 -= utok;
        }
        cout << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
        cout << "Utok monstra1 : -" << utokMonstra1 << "HP" << endl;
        cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
        cout << "Utok monstra2: -" << utokMonstra2 << "HP" << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
        }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (50% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (75% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 50){
                cout << "Monstrum Vas zasahlo" << endl;
                zivoty -= utokKolo;
                if (zivoty <= 0){
                    cout << "Monstrum Vas porazilo" << endl;
                    exit(0);
                }
            }else{
                cout << "Zasahli jste monstrum" << endl;
                if (zivotyMonstra1 > 0){
                    zivotyMonstra1 -= utok;
                }else{
                    zivotyMonstra2 -= utok;
                }
                if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
                }
            }
        }else if (volba == 2){
            cout << "Monstrum Vas minulo" << endl;
            cout << "----------------------" << endl;
            cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
            cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
            cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
            cout << "----------------------" << endl;
        }
    }else if (volba == 2){
        cout << "Monstrum Vas minulo" << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
        cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
        }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (30% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (60% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 70){
                cout << "Monstrum Vas minulo" << endl;
                utokMonstra1 *= 2;
                utokMonstra2 *= 2;
            }else{
                cout << "Monstrum Vas zasahlo" << endl;
                zivoty -= utokKolo;
                if (zivoty <= 0){
                    cout << "Monstrum Vas porazilo" << endl;
                    exit(0);
                }
                if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
                }
            }
        }else if (volba == 2){
            cout << "Monstrum Vas minulo, ale nabilo si utok, ktery vam da 2x vice poskozeni." << endl;
            utokMonstra1 *= 2;
            utokMonstra2 *= 2;
        }
    }else{
        cout << "neplatny vstup, zadejte volbu znovu" << endl;
        cin >> volba;
    }
}
    if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
    }
    if (zivoty <= 0){
        cout << "Monstrum Vas porazilo" << endl;
        exit(0);
    }
}
// ------------------------------------------------------------------

// 3xMonstrum
void M3x(){
int maxzivotyMonstra1 = 5;
int maxzivotyMonstra2 = 6;
int maxzivotyMonstra3 = 7;
int zivotyMonstra1 = 5;
int zivotyMonstra2 = 6;
int zivotyMonstra3 = 7;
int utokMonstra1 = 2;
int utokMonstra2 = 4;
int utokMonstra3 = 3;
cout << "----------------------" << endl;
cout << "Lokace: Souboj s monstrem" << endl;
cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
cout << "Utok monstra1 : -" << utokMonstra1 << "HP" << endl;
cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
cout << "Utok monstra2: -" << utokMonstra2 << "HP" << endl;
cout << "Zivoty monstra 3: " << zivotyMonstra3 << "/" << maxzivotyMonstra3 << endl;
cout << "Utok monstra3: -" << utokMonstra3 << "HP" << endl;
cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
cout << "----------------------" << endl;
cout << "Monstrum 1: co tu chces?! Znicim te jestli se do 5 vterin neztratis!" << endl;
cout << classa << ": Nevim co si myslite ze jste, dam Vas levou zadni." << endl;
cout << "Monstrum 3: Cha! Tak si to rozdame." << endl;
cout << "----------------------" << endl;
cout << endl;

while (zivoty > 0 && (zivotyMonstra1 > 0 || zivotyMonstra2 > 0 || zivotyMonstra3 > 0)){
    int utokKolo = 0;
    if (zivotyMonstra1 > 0){
        utokKolo = utokMonstra1;
    }else if (zivotyMonstra2 > 0){
        utokKolo = utokMonstra2;
    }else if (zivotyMonstra3 > 0){
        utokKolo = utokMonstra3;
    }

    if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0 && zivotyMonstra3 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
    }
    cout << endl;
    cout << "----------------------" << endl;
    cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
    cout << "Utok monstra1 : -" << utokMonstra1 << "HP" << endl;
    cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
    cout << "Utok monstra2: -" << utokMonstra2 << "HP" << endl;
    cout << "Zivoty monstra 3: " << zivotyMonstra3 << "/" << maxzivotyMonstra3 << endl;
    cout << "Utok monstra3: -" << utokMonstra3 << "HP" << endl;
    cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
    cout << "----------------------" << endl;

    cout << "Monstrum Vam zasadilo zasah" << endl;
    zivoty -= utokKolo;

            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
    cout << "Monstrum Vam chce zasadit zasah, co udelate?" << endl;
    cout << "1) Zautocite na monstrum" << endl;
    cout << "2) Uhnete (monstrum si nabije utok, ktery dava 2x vice poskozeni)" << endl;
    cout << "Vase volba: ";
    cin >> volba;
    cout << endl;
    if (volba == 1){
        if (zivotyMonstra1 > 0){
            cout << "Utok monstru 1 ubral " << utok << " zivotu" << endl;
            zivotyMonstra1 -= utok;
        }else if (zivotyMonstra2 > 0){
            cout << "Utok monstru 2 ubral " << utok << " zivotu" << endl;
            zivotyMonstra2 -= utok;
        }else{
            cout << "Utok monstru 3 ubral " << utok << " zivotu" << endl;
            zivotyMonstra3 -= utok;
        }
        cout << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
        cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
        cout << "Zivoty monstra 3: " << zivotyMonstra3 << "/" << maxzivotyMonstra3 << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0 && zivotyMonstra3 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
        }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (50% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (75% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 50){
                cout << "Monstrum Vas zasahlo" << endl;
                zivoty -= utokKolo;
                if (zivoty <= 0){
                    cout << "Monstrum Vas porazilo" << endl;
                    exit(0);
                }
            }else{
                cout << "Zasahli jste monstrum" << endl;
                if (zivotyMonstra1 > 0){
                    zivotyMonstra1 -= utok;
                }else if (zivotyMonstra2 > 0){
                    zivotyMonstra2 -= utok;
                }else{
                    zivotyMonstra3 -= utok;
                }
                if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0 && zivotyMonstra3 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
                }
            }
        }else if (volba == 2){
            cout << "Monstrum Vas minulo" << endl;
            cout << "----------------------" << endl;
            cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
            cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
            cout << "Zivoty monstra 3: " << zivotyMonstra3 << "/" << maxzivotyMonstra3 << endl;
            cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
            cout << "----------------------" << endl;
        }
    }else if (volba == 2){
        cout << "Monstrum Vas minulo" << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra 1: " << zivotyMonstra1 << "/" << maxzivotyMonstra1 << endl;
        cout << "Zivoty monstra 2: " << zivotyMonstra2 << "/" << maxzivotyMonstra2 << endl;
        cout << "Zivoty monstra 3: " << zivotyMonstra3 << "/" << maxzivotyMonstra3 << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0 && zivotyMonstra3 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
        }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (30% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (60% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 70){
                cout << "Monstrum Vas minulo" << endl;
                utokMonstra1 *= 2;
                utokMonstra2 *= 2;
                utokMonstra3 *= 2;
            }else{
                cout << "Monstrum Vas zasahlo" << endl;
                zivoty -= utokKolo;
                if (zivoty <= 0){
                    cout << "Monstrum Vas porazilo" << endl;
                    exit(0);
                }
                if (zivotyMonstra1 <= 0 && zivotyMonstra2 <= 0 && zivotyMonstra3 <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << ziskaneZlato << " zlata." << endl;
                    cout << endl;
                    return;
                }
            }
        }else if (volba == 2){
            cout << "Monstrum Vas minulo, ale nabilo si utok, ktery vam da 2x vice poskozeni." << endl;
            utokMonstra1 *= 2;
            utokMonstra2 *= 2;
            utokMonstra3 *= 2;
        }
    }else{
        cout << "neplatny vstup, zadejte volbu znovu" << endl;
        cin >> volba;
    }
}
}
// ------------------------------------------------------------------

// Mini Boss
void MB(){
int maxzivotyMonstra = 15;
int zivotyMonstra = 15;
int utokMonstra = 4;
cout << "----------------------" << endl;
cout << "Lokace: Souboj s monstrem" << endl;
cout << "Utok monstra: -" << utokMonstra << "HP" << endl;
cout << "----------------------" << endl;
cout << "Monstrum: co tu chces?! Znicim te jestli se do 5 vterin neztratis!" << endl;
cout << classa << ": Nevim co si myslis ze jsi, dam te levou zadni." << endl;
cout << "Monstrum: Cha! Tak si to rozdame." << endl;
cout << "----------------------" << endl;
cout << endl;

while (zivoty > 0 && zivotyMonstra > 0){
    cout << "Monstrum Vam zasadilo zasah" << endl;
    zivoty -= utokMonstra;
    cout << endl;
    cout << "----------------------" << endl;
    cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
    cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
    cout << "----------------------" << endl;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
    cout << "Monstrum Vam chce zasadit zasah, co udelate?" << endl;
    cout << "1) Zautocite na monstrum" << endl;
    cout << "2) Uhnete (monstrum si nabije utok, ktery dava 2x vice poskozeni)" << endl;
    cout << "Vase volba: ";
    cin >> volba;
    cout << endl;
    if (volba == 1){
        cout << "Utok monstru ubral " << utok << " zivotu" << endl;
        zivotyMonstra -= utok;
        cout << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (50% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (75% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 50){
                cout << "Monstrum Vas zasahlo" << endl;
                if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
            }else{
                cout << "Zasahli jste monstrum" << endl;
                zivotyMonstra -= utok;
                if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (3 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        } }
    }else if (volba == 2){
        cout << "Monstrum Vas minulo" << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            } }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (30% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (60% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 70){
                cout << "Monstrum Vas minulo" << endl;
                utokMonstra *= 2;
            }else{
                cout << "Monstrum Vas zasahlo" << endl;
                zivoty -= utokMonstra;
                if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
                }
            }
            }
        }
        }else if (volba == 2){
            cout << "Monstrum Vas minulo, ale nabilo si utok, ktery vam da 2x vice poskozeni." << endl;
}else{
    cout << "neplatny vstup, zadejte volbu znovu" << endl;
    cin >> volba;
} } }
    if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (4 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
}
}
// ------------------------------------------------------------------

// Hlavni Boss
void HB(){
int maxzivotyMonstra = 25;
int zivotyMonstra = 25;
int utokMonstra = 6;
cout << "----------------------" << endl;
cout << "Lokace: Souboj s monstrem" << endl;
cout << "Utok monstra: -" << utokMonstra << "HP" << endl;
cout << "----------------------" << endl;
cout << "Monstrum: co tu chces?! Znicim te jestli se do 5 vterin neztratis!" << endl;
cout << classa << ": Nevim co si myslis ze jsi, dam te levou zadni." << endl;
cout << "Monstrum: Cha! Tak si to rozdame." << endl;
cout << "----------------------" << endl;
cout << endl;

while (zivoty > 0 && zivotyMonstra > 0){
    cout << "Monstrum Vam zasadilo zasah" << endl;
    zivoty -= utokMonstra;
    cout << endl;
    cout << "----------------------" << endl;
    cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
    cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
    cout << "----------------------" << endl;
            if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (4 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
    cout << "Monstrum Vam chce zasadit zasah, co udelate?" << endl;
    cout << "1) Zautocite na monstrum" << endl;
    cout << "2) Uhnete (monstrum si nabije utok, ktery dava 2x vice poskozeni)" << endl;
    cout << "Vase volba: ";
    cin >> volba;
    cout << endl;
    if (volba == 1){
        cout << "Utok monstru ubral " << utok << " zivotu" << endl;
        zivotyMonstra -= utok;
        cout << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra < 1){
                    cout << "Porazil jste Hlavniho bosse, gratuluji!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (50% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (75% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 50){
                cout << "Monstrum Vas zasahlo" << endl;
                if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
            }else{
                cout << "Zasahli jste monstrum" << endl;
                zivotyMonstra -= utok;
                if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        } }
    }else if (volba == 2){
        cout << "Monstrum Vas minulo" << endl;
        cout << "----------------------" << endl;
        cout << "Zivoty monstra: " << zivotyMonstra << "/" << maxzivotyMonstra << endl;
        cout << "Vase zivoty: " << zivoty << "/" << maxzivoty << endl;
        cout << "----------------------" << endl;
        if (zivotyMonstra < 1){
                    cout << "Porazil jste Hlavniho bosse, gratuluji!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        }
        cout << "Monstrum se na Vas vrhnulo, co udelate?" << endl;
        cout << "1) Zautocite na monstrum (30% sance ze se utok na monstrum podari)" << endl;
        cout << "2) Uhnete (60% sance ze se uhnuti pred monstrem podari)" << endl;
        cout << "Vase volba: ";
        cin >> volba;
        cout << endl;
        if (volba == 1){
            if (rand() % 100 < 70){
                cout << "Minul jste monstrum" << endl;
            }else{
                cout << "Zasahli jste monstrum" << endl;
                zivotyMonstra -= utok;
                if (zivotyMonstra <= 0){
                    cout << "Porazil jste monstrum!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
                    return;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        }
            }
        }
        }else if (volba == 2){
            cout << "Monstrum Vas minulo, ale nabilo si utok, ktery vam da 2x vice poskozeni." << endl;
            utokMonstra *= 2;
}else{
    cout << "neplatny vstup, zadejte volbu znovu" << endl;
    cin >> volba;
} } }
    if (zivotyMonstra < 1){
                    cout << "Porazil jste Hlavniho bosse, gratuluji!" << endl;
                    cout << endl;
                    int ziskaneZlato = rand() % (5 + 1) + 3;
                    zlato += ziskaneZlato;
                    cout << "Za porazeni monstra jste ziskal " << zlato << " zlata." << endl;
                    cout << endl;
            if (zivoty <= 0){
                cout << "Monstrum Vas porazilo" << endl;
                exit(0);
            }
        }
} }
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
        maxzivoty = 5;
    cout << "----------------------" << endl;
    cout << "zivoty = 9/9" << endl;
        zivoty = 5;
    cout << "utok = 5" << endl;
        utok = 3;
    cout << "mana = 5" << endl;
        mana = 5;
    cout << "----------------------" << endl;

    }else if (classa == "Lovec"){
    cout << "Vas vyber: " << classa << endl;
        maxzivoty = 4;
    cout << "----------------------" << endl;
    cout << "zivoty = 9/9" << endl;
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
    cout << "zivoty = 7/7" << endl;
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
    cout << "zivoty = 10/10" << endl;
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

while (zivoty > 0){
    M();
    V();
    M();
    V();
    M();
    V();
    M2x();
    V();
    M3x();
    V();
    M();
    V();
    MB();
    V();
    M2x();
    M3x();
    V();
    HB();
    return 0;
}

}
