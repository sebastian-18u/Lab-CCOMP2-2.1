// Tres_en_raya.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <cmath>
#include <time.h>
using namespace std;
char enteroACaracter(int numero) {
    return numero + '0';
}
int main()
{
    char char1 = '1', char2 = '2', char3 = '3', char4 = '4', char5 = '5', char6 = '6';
    char char7 = '7', char8 = '8', char9 = '9', jug1 = '1', jug2 = '2', ver1 = '0', ver2='10',modo='0',pc;
    int i;
    int p = 0;
    int arreglo[10];
    int dif1 = 0;
    srand(time(0));
    int turnos=0;
    std::cout << "Modo de juego A) 1 jugador\n";
    std::cout << "B) 2 jugadores\n";
    std::cin >> modo;
    if (modo == 'A') {
        std::cout << "Que eliges X o O: ";
        std::cin >> jug1;
        if (jug1 && 'X' or jug1 && 'O') {
            if (jug1 == 'X') {
                pc = 'O';
                std::cout << "El jugador 1 usara: " << jug1 << "\nEl pc usara: " << pc << "\n";
            }
            if (jug1 == 'O') {
                pc = 'X';
                std::cout << "El jugador 1 usara: " << jug1 << "\nEl pc usara: " << pc << "\n";
            }
        }
        while (turnos < 10) {
            std::cout << "\n\t" << char1 << " | " << char2 << " | " << char3 << "\n";
            std::cout << "\t__________\n";
            std::cout << "\t" << char4 << " | " << char5 << " | " << char6 << "\n";
            std::cout << "\t__________\n";
            std::cout << "\t" << char7 << " | " << char8 << " | " << char9 << "\n";
            if (turnos % 2 == 0) {
                std::cout << "Jugador " << jug1 << " ingresa la posicion: ";
                std::cin >> ver1;
            }
            if (turnos % 2 == 1) {
                dif1 = (1 + rand() % 9);
                int dif2 = 0;
                if (dif1 != ver1) {
                    while (dif2 < p) {
                        if (dif1 != arreglo[dif2]) {
                            dif2++;
                        }
                        else {
                            dif1 = (1 + rand() % 9);
                            dif2 = 0;
                        }
                    }
                    arreglo[p] = dif1;
                    ver2 = enteroACaracter(arreglo[p]);
                    std::cout << "La pc " << pc << " ingresa la posicion: " << ver2;
                    p++;
                }
            }
            turnos += 1;
            if (ver1 == char1) {
                char1 = jug1;
            }
            if (ver1 == char2) {
                char2 = jug1;
            }
            if (ver1 == char3) {
                char3 = jug1;
            }
            if (ver1 == char4) {
                char4 = jug1;
            }
            if (ver1 == char5) {
                char5 = jug1;
            }
            if (ver1 == char6) {
                char6 = jug1;
            }
            if (ver1 == char7) {
                char7 = jug1;
            }
            if (ver1 == char8) {
                char8 = jug1;
            }
            if (ver1 == char9) {
                char9 = jug1;
            }
            if (ver2 == char1) {
                char1 = pc;
            }
            if (ver2 == char2) {
                char2 = pc;
            }
            if (ver2 == char3) {
                char3 = pc;
            }
            if (ver2 == char4) {
                char4 = pc;
            }
            if (ver2 == char5) {
                char5 = pc;
            }
            if (ver2 == char6) {
                char6 = pc;
            }
            if (ver2 == char7) {
                char7 = pc;
            }
            if (ver2 == char8) {
                char8 = pc;
            }
            if (ver2 == char9) {
                char9 = pc;
            }
            if (jug1 == 'X') {
                if (char1 == 'X' and char2 == 'X' and char3 == 'X') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char4 == 'X' and char5 == 'X' and char6 == 'X') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char7 == 'X' and char8 == 'X' and char9 == 'X') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'X' and char4 == 'X' and char7 == 'X') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";
                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char2 == 'X' and char5 == 'X' and char8 == 'X') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char3 == 'X' and char6 == 'X' and char9 == 'X') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'X' and char5 == 'X' and char9 == 'X') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char3 == 'X' and char5 == 'X' and char7 == 'X') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'O' and char2 == 'O' and char3 == 'O') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char4 == 'O' and char5 == 'O' and char6 == 'O') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char7 == 'O' and char8 == 'O' and char9 == 'O') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'O' and char4 == 'O' and char7 == 'O') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char2 == 'O' and char5 == 'O' and char8 == 'O') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char3 == 'O' and char6 == 'O' and char9 == 'O') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'O' and char5 == 'O' and char9 == 'O') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char3 == 'O' and char5 == 'O' and char7 == 'O') {
                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    break;
                }

            }
            else if (jug1 == 'O') {
                if (char1 == 'O' and char2 == 'O' and char3 == 'O') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char4 == 'O' and char5 == 'O' and char6 == 'O') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char7 == 'O' and char8 == 'O' and char9 == 'O') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'O' and char4 == 'O' and char7 == 'O') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char2 == 'O' and char5 == 'O' and char8 == 'O') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char3 == 'O' and char6 == 'O' and char9 == 'O') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'O' and char5 == 'O' and char9 == 'O') {
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char3 == 'O' and char5 == 'O' and char7 == 'O') {
                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    std::cout << "Jugador " << jug1 << " gana\n";
                    std::cout << "Jugador " << pc << " pierde\n";

                    break;
                }
                if (char1 == 'X' and char2 == 'X' and char3 == 'X') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char4 == 'X' and char5 == 'X' and char6 == 'X') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char7 == 'X' and char8 == 'X' and char9 == 'X') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'X' and char4 == 'X' and char7 == 'X') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";
                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char2 == 'X' and char5 == 'X' and char8 == 'X') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char3 == 'X' and char6 == 'X' and char9 == 'X') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char1 == 'X' and char5 == 'X' and char9 == 'X') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
                if (char3 == 'X' and char5 == 'X' and char7 == 'X') {
                    std::cout << "Jugador " << pc << " gana\n";
                    std::cout << "Jugador " << jug1 << " pierde\n";

                    std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                    std::cout << "\t_____\n";
                    std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                    break;
                }
            }

        }
    }
    if (modo == 'B') {
        std::cout << "Que eliges X o O: ";
        std::cin >> jug1;
        if (jug1 && 'X' or jug1 && 'O') {
            if (jug1 == 'X') {
                jug2 = 'O';
                std::cout << "El jugador 1 usara: " << jug1 << "\nEl jugador 2 usara: " << jug2 << "\n";
            }
            if (jug1 == 'O') {
                jug2 = 'X';
                std::cout << "El jugador 1 usara: " << jug1 << "\nEl jugador 2 usara: " << jug2 << "\n";
            }
        }
            while (turnos < 10) {

                std::cout << "\n\t" << char1 << " | " << char2 << " | " << char3 << "\n";
                std::cout << "\t__________\n";
                std::cout << "\t" << char4 << " | " << char5 << " | " << char6 << "\n";
                std::cout << "\t__________\n";
                std::cout << "\t" << char7 << " | " << char8 << " | " << char9 << "\n";
                if (turnos % 2 == 0) {
                    std::cout << "Jugador " << jug1 << " ingresa la posicion: ";
                    std::cin >> ver1;
                }
                if (turnos % 2 == 1) {
                    std::cout << "Jugador " << jug2 << " ingresa la posicion: ";
                    std::cin >> ver2;
                }
                turnos += 1;
                if (ver1 == char1) {
                    char1 = jug1;
                }
                if (ver1 == char2) {
                    char2 = jug1;
                }
                if (ver1 == char3) {
                    char3 = jug1;
                }
                if (ver1 == char4) {
                    char4 = jug1;
                }
                if (ver1 == char5) {
                    char5 = jug1;
                }
                if (ver1 == char6) {
                    char6 = jug1;
                }
                if (ver1 == char7) {
                    char7 = jug1;
                }
                if (ver1 == char8) {
                    char8 = jug1;
                }
                if (ver1 == char9) {
                    char9 = jug1;
                }
                if (ver2 == char1) {
                    char1 = jug2;
                }
                if (ver2 == char2) {
                    char2 = jug2;
                }
                if (ver2 == char3) {
                    char3 = jug2;
                }
                if (ver2 == char4) {
                    char4 = jug2;
                }
                if (ver2 == char5) {
                    char5 = jug2;
                }
                if (ver2 == char6) {
                    char6 = jug2;
                }
                if (ver2 == char7) {
                    char7 = jug2;
                }
                if (ver2 == char8) {
                    char8 = jug2;
                }
                if (ver2 == char9) {
                    char9 = jug2;
                }
                if (jug1 == 'X') {
                    if (char1 == 'X' and char2 == 'X' and char3 == 'X') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char4 == 'X' and char5 == 'X' and char6 == 'X') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char7 == 'X' and char8 == 'X' and char9 == 'X') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'X' and char4 == 'X' and char7 == 'X') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";
                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char2 == 'X' and char5 == 'X' and char8 == 'X') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char3 == 'X' and char6 == 'X' and char9 == 'X') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'X' and char5 == 'X' and char9 == 'X') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char3 == 'X' and char5 == 'X' and char7 == 'X') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'O' and char2 == 'O' and char3 == 'O') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char4 == 'O' and char5 == 'O' and char6 == 'O') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char7 == 'O' and char8 == 'O' and char9 == 'O') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'O' and char4 == 'O' and char7 == 'O') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char2 == 'O' and char5 == 'O' and char8 == 'O') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char3 == 'O' and char6 == 'O' and char9 == 'O') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'O' and char5 == 'O' and char9 == 'O') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char3 == 'O' and char5 == 'O' and char7 == 'O') {
                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        break;
                    }

                }
                else if (jug1 == 'O') {
                    if (char1 == 'O' and char2 == 'O' and char3 == 'O') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char4 == 'O' and char5 == 'O' and char6 == 'O') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char7 == 'O' and char8 == 'O' and char9 == 'O') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'O' and char4 == 'O' and char7 == 'O') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char2 == 'O' and char5 == 'O' and char8 == 'O') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char3 == 'O' and char6 == 'O' and char9 == 'O') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'O' and char5 == 'O' and char9 == 'O') {
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char3 == 'O' and char5 == 'O' and char7 == 'O') {
                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        std::cout << "Jugador " << jug1 << " gana\n";
                        std::cout << "Jugador " << jug2 << " pierde\n";

                        break;
                    }
                    if (char1 == 'X' and char2 == 'X' and char3 == 'X') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char4 == 'X' and char5 == 'X' and char6 == 'X') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char7 == 'X' and char8 == 'X' and char9 == 'X') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'X' and char4 == 'X' and char7 == 'X') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";
                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char2 == 'X' and char5 == 'X' and char8 == 'X') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char3 == 'X' and char6 == 'X' and char9 == 'X') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char1 == 'X' and char5 == 'X' and char9 == 'X') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                    if (char3 == 'X' and char5 == 'X' and char7 == 'X') {
                        std::cout << "Jugador " << jug2 << " gana\n";
                        std::cout << "Jugador " << jug1 << " pierde\n";

                        std::cout << "\t" << char1 << "|" << char2 << "|" << char3 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char4 << "|" << char5 << "|" << char6 << "\n";
                        std::cout << "\t_____\n";
                        std::cout << "\t" << char7 << "|" << char8 << "|" << char9 << "\n";
                        break;
                    }
                }

            }
        }
    
    }

    


