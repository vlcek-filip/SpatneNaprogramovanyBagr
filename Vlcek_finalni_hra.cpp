#include <iostream>

using namespace std;

int zivoty;
int maxzivoty;
int zlato;
int mana;
int maxmana;
string class;


int main(){

cout << "-----------VITEJ VE HRE-----------" << endl;
cout << "Za jakou tridu budete chtit hrat? (Paladin, Lovec, Mag, Warlock)" << endl;
cin >> class; 

if (class == 'Paladin'){
        maxzivoty = 5;
        zivoty = 5;
        utok = 3;
        mana = 5;

    }else if (class == 'Lovec'){
        maxzivoty = 4;
        zivoty = 4;
        utok = 4;
        mana = 2;

    }else if (class == 'Mag'){
       maxzivoty = 3;
       zivoty = 3;
       utok = 4;
       mana = 10;

    }else if (class == 'Warlock'){
        maxzivoty = 7;
        zivoty = 7;
        utok = 4;
        mana = 1;



    }
} 
