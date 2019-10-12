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
    return 0;
}

// Token
string fichaToStr(short int left, short int right) {
    string str = "|" + toStr(left) + "-" + toStr(right) + "|";
    return str;
}

bool canPutLeft(string table, short int tokenN1, short int tokenN2) {
    return 0;
}

bool canPutRight(string table, short int tokenN1, short int tokenN2) {
    return 0;
}

string putTokenLeft(string table, short int tokenN1, short int tokenN2) {
    return 0;
}

string putTokenRight(string table, short int tokenN1, short int tokenN2) {
    return 0;
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
    srand(time(NULL));
    return 0;
}
