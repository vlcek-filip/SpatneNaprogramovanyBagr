#include <iostream>

using namespace std;

int zivoty;
int maxzivoty;
int zlato;
int mana;
int maxmana;
string class;
string volbaclassy;

int main(){

cout << "-----------VITEJ VE HRE-----------" << endl;
cout << "Za jakou tridu budete chtit hrat? (Paladin, Lovec, Mag, Warlock)" << endl;
cin >> class; 

if (class == 'Paladin'){
    cout << "Vas vyber: Paladin" << endl;
        maxzivoty = 5;
    cout << "zivoty = 5/5" << endl;
        zivoty = 5;
    cout << "utok = 3" << endl;
        utok = 3;
    cout << "mana = 5" << endl;
        mana = 5;

    }else if (class == 'Lovec'){
    cout << "Vas vyber: Lovec" << endl;
        maxzivoty = 4;
    cout << "zivoty = 4/4" << endl;
        zivoty = 4;
    cout << "utok = 3" << endl;
        utok = 4;
    cout << "mana = 2" << endl;
        mana = 2;

    }else if (class == 'Mag'){
    cout << "Vas vyber: Mag" << endl;
       maxzivoty = 3;
    cout << "zivoty = 3/3" << endl;
       zivoty = 3;
    cout << "utok = 3" << endl;
       utok = 4;
    cout << "mana = 10" << endl;
       mana = 10;

    }else if (class == 'Warlock'){
    cout << "Vas vyber: Warlock" << endl;
        maxzivoty = 7;
    cout << "zivoty = 7/7" << endl;
        zivoty = 7;
    cout << "utok = 4" << endl;
        utok = 4;
    cout << "mana = 1" << endl;
        mana = 1;


    }else{
        cout << "neplatny vyber, vyberte znovu" << endl;
    }
    
    cout << "chcete tuto class vybrat? " << endl;
    cin >> volbaclass
} 
