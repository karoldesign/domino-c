//
//  main.cpp
//  practica-1-domino
//
//  Created by Carolina Chamorro on 12/10/2019.
//  Copyright © 2019 Carolina Chamorro. All rights reserved.
//

#include <time.h>
#include <cstdlib>
#include <list>
#include <iostream>

using namespace std;

string toStr(int n) {
    switch (n) {
        case 0:
            return "0";
        case 1:
            return "1";
        case 2:
            return "2";
        case 3:
            return "3";
        case 4:
            return "4";
        case 5:
            return "5";
        case 6:
            return "6";
        case 7:
            return "7";
        case 8:
            return "8";
        case 9:
            return "9";
    }
    
    return 0;
}

// Token
string fichaToStr(short int left, short int right) {
    string str = "|" + toStr(left) + "-" + toStr(right) + "|";
    return str;
}

bool canPutLeft(string table, short int tokenN1, short int tokenN2) {
    return (table[1]-0x30==tokenN2);
}

bool canPutRight(string table, short int tokenN1, short int tokenN2) {
    return (table[table.size()-2]-0x30==tokenN1);
}

string putTokenLeft(string table, short int tokenN1, short int tokenN2) {
    return table + fichaToStr(tokenN1, tokenN2);
}

string putTokenRight(string table, short int tokenN1, short int tokenN2) {
    return table + fichaToStr(tokenN1, tokenN2);
}

// Tablero
void mostrarTablero(short int tokenN1, short int tokenN2, string table, int numCounter, int numStolen) {
    cout << " -------------------- " << endl;
    cout << "|       TABLERO      |" << endl;
    cout << " -------------------- " << endl;
    cout << table << endl;
    cout << "Fichas colocadas: " << numCounter << " - Fichas robadas: " << numStolen << endl;
    cout << "Ficha jugador: " << fichaToStr(tokenN1, tokenN2) << endl;
    return;
}

// Menú
int showMenu() {
    int chooseOption = 0;
    
    while (chooseOption < 1 || chooseOption > 4)
    {
        cout << " -------------------- " << endl;
        cout << "|  MENÚ DE OPCIONES  |" << endl;
        cout << " -------------------- " << endl;
        cout << "1. Poner ficha por la izquierda" << endl;
        cout << "2. Poner ficha por la derecha" << endl;
        cout << "3. Robar ficha nueva" << endl;
        cout << "4. Salir" << endl;
        
        cout << "Elija opción: ";
        cin >> chooseOption;
    }
    
    return chooseOption;
}

// Alert
short int aleat() {
    return rand()%7;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int counter = 0, stolen = 0, option = 0;
    srand(time(NULL));
    
    return 0;
}
