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
        default:
            return "ERROR";
    }
}

// Token
string tokenToStr(short int left, short int right) {
    string str = "|" + toStr(left) + "-" + toStr(right) + "|";
    return str;
}

bool canPutLeft(string board, short int tokenN1, short int tokenN2) {
    return (board[1]-0x30==tokenN2);
}

bool canPutRight(string board, short int tokenN1, short int tokenN2) {
    return (board[board.size()-2]-0x30;==tokenN1);
}

string putTokenLeft(string board, short int tokenN1, short int tokenN2) {
    return tokenToStr(tokenN1, tokenN2) + board;
}

string putTokenRight(string board, short int tokenN1, short int tokenN2) {
    return board + tokenToStr(tokenN1, tokenN2);
}

// Tablero
void showBoard(short int tokenN1, short int tokenN2, string board, int numCounter, int numStolen) {
    cout << " -------------------- " << endl;
    cout << "|       TABLERO      |" << endl;
    cout << " -------------------- " << endl;
    cout << board << endl;
    cout << "Fichas colocadas: " << numCounter << " - Fichas robadas: " << numStolen << endl;
    cout << "Ficha jugador: " << tokenToStr(tokenN1, tokenN2) << endl;
    return;
}

// Menú
int showMenu() {
    int chooseOption = 0;
    
    while (chooseOption < 1 || chooseOption > 4) {
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
    int counter = 0, stolen = 0;

    srand(time(NULL));
    for (int option = 0; option != 4;) {
        option = showMenu();
        switch(option){
            case 1:
                if (canPutLeft(board, tokenN1, tokenN2)) {
                    putTokenLeft(board, tokenN1, tokenN2);
                    counter++;
                } else if (canPutLeft(board, tokenN2, tokenN1)) {
                    putTokenLeft(board, tokenN2, tokenN1);
                    counter++;
                } else {
                    cout << " ERROR! :-( " << endl;
                }
                break;
            case 2:
                if (canPutRight(board, tokenN1, tokenN2)) {
                    putTokenRight(board, tokenN1, tokenN2);
                    counter++;
                } else if (canPutRight(board, tokenN2, tokenN1)) {
                    putTokenRight(board, tokenN2, tokenN1);
                    counter++;
                } else {
                    cout << " ERROR! :-( " << endl;
                }
                break;
            case 3:
        }
    } 
    return 0;
}
