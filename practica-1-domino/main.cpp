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

// Token
string fileToStr(short int left, short int right) {
    return 0;
}

string toStr(int n) {
    return 0;
}

bool putLeft(string table, short int tokenN1, short int tokenN2) {
    return 0;
}

bool putRight(string table, short int tokenN1, short int tokenN2) {
    return 0;
}

string ponerFichaIzq(string table, short int tokenN1, short int tokenN2) {
    return 0;
}

string ponerFichaDer(string table, short int tokenN1, short int tokenN2) {
    return 0;
}

// Tablero
void mostrarTablero(short int tokenN1, short int tokenN2, string table, int numCounter, int numStolen) {
    return;
}
// Menú
int showMenu() {
    return 0;
}

// Alert
short int aleat() {
    return 0;
}

int main(int argc, const char * argv[]) {
    int chooseOption;
    
    cout << " -------------------- " << endl;
    cout << "|       TABLERO      |" << endl;
    cout << " -------------------- " << endl;
    cout << " -------------------- " << endl;
    cout << "|  MENÚ DE OPCIONES  |" << endl;
    cout << " -------------------- " << endl;
    cout << "1. Poner ficha por la izquierda" << endl;
    cout << "2. Poner ficha por la derecha" << endl;
    cout << "3. Robar ficha nueva" << endl;
    cout << "4. Salir" << endl;
    
    cout << "Elija opción: ";
    cin >> chooseOption;
    
    return 0;
}
