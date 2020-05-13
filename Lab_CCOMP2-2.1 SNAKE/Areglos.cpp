// Areglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Areglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
int c = 5;
int f = 5;
void tablero(char mov,int &c,int &f) {
    
    char serp[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == c and j == f) {
                serp[i][j] = '@';
            }
            else{ serp[i][j] = '_'; }
            std::cout <<"|"<< serp[i][j];
        }
        std::cout <<"|"<< "\n";
    }
    std::cout << "Ingrese movimiento: ";
    std::cin >> mov;
    if (mov == 'w') {
        c = c - 1;
        
    }
    if (mov == 's') {
        c = c + 1;
    }
    if (mov == 'a') {
        f = f - 1;
    }
    if (mov == 'd') {
        f = f + 1;
    }
}
/*void mover(char arr[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
                
        }
    }
}*/
int main()
{
    char n = '0';
    char bo='a';
    bool perd = false;
    /*while (perd==false) {
        std::cin >> n;
        tablero(n);
    }*/
    while (bo != 'e') {
        tablero(n,c,f);
    }
}

