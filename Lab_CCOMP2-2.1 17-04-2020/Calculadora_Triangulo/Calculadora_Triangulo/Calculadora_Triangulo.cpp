// Calculadora_Triangulo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#define PI 3.14159

int main()
{
   
    float val1, val2, val3,alpha,beta;
    float a, b, c;
    std::cout << "\t\t\t\t\tEn caso de no conocer un dato ingresar -1,\n ";
    std::cout << "Solo ingresar numeros\n, si ingresa dos lados los angulos se adaptaran al triangulo existente\n";
    std::cout << "Ingrese un lado: ";
    std::cin >> val1;
    std::cout << "Ingrese otro lado: ";
    std::cin >> val2;
    std::cout << "Ingrese un tercer lado: ";
    std::cin >> val3;
    std::cout << "Ingrese alpha: ";
    std::cin >> alpha;
    std::cout << "Ingrese beta: ";
    std::cin >> beta;
    if (alpha > 90 or beta>90 ) {
        std::cout << "No puede haber un angulo mayor a 90";
        return 0;
    }
    if (val1 > val2 && val1 > val3) {
        c = val1;
        a = val2;
        b = val3;
        if (val2 == val3) {
            a = -1;
            b = -1;
        }
    }
    else {
        if (val2 > val3 && val2 > val1) {
            c = val2;
            a = val3;
            b = val1;
            if (val3 == val1) {
                a = -1;
                b = -1;
            }
        }
        else {
            c = val3;
            a = val1;
            b = val2;
            if (val1 == val2) {
                a = -1;
                b = -1;
            }
        }
    }
    if (val1 < 0 and val2 < 0 and val3 < 0) {
        a = -1;
        b = -1;
        c = -1;
    }
    if ((a * a) + (b * b) != c * c and a > 0 and b > 0 and c>0) {
        std::cout << "El triangulo no existe";
    }
    else {
        if (a < 0 and a != b and a != c) {
            std::cout << "Los angulos se sobreescriiran para ajustarse al triangulo mas proximo\n";
            a = sqrt((c * c) - (b * b));
            alpha = (a / c) * (180 / PI);
            beta = (b / c) * (180 / PI);
        }
        if (b < 0 and b != a and b != c) {
            std::cout << "Los angulos se sobreescriiran para ajustarse al triangulo mas proximo\n";
            b = sqrt((c * c) - (a * a));
            alpha = (b / c) * (180 / PI);
            beta = (a / c) * (180 / PI);
        }
        if (c < 0 and c != a and c != b) {
            std::cout << "Los angulos se sobreescriiran para ajustarse al triangulo mas proximo\n";
            c = sqrt((a * a) + (b * b));
            alpha = (a / c) * (180 / PI);
            beta = (b / c) * (180 / PI);
        }
        if (c > 0 and b > 0 and a > 0) {
            alpha = asin(a / c) * (180 / PI);
            beta = asin(b / c) * (180 / PI);
        }
        if (c < 0 and b < 0 and a < 0) {
            std::cout<<"No se puede resolver el triangulo solo con sus angulos";
            return 0;
        }
        if (c < 0 and b < 0 and a < 0 and alpha<0 and beta<0) {
            std::cout<<"No se puede crear el triangulo sin datos";
            return 0;
        }
        if (c > 0 and alpha > 0 and a<0 and b<0 and beta<0) {
            float angulo;
            angulo = alpha * (PI / 180);
            a = c *angulo;
            b = sqrt((c * c) - (a * a));
            beta = 90 - alpha;
        }
        if (c > 0 and beta > 0 and a < 0 and b < 0 and alpha<0) {
            float angulo;
            angulo = beta * (PI / 180);
            b = c * angulo;
            a = sqrt((c * c) - (b * b));
            alpha = 90 - beta;
        }
        std::cout << "Lado 1: " << a << "\n";
        std::cout << "Lado 2: " << b << "\n";
        std::cout << "Hipotenusa: " << c << "\n";
        std::cout << "Alpha: " << alpha << " grados\n";
        std::cout << "sen(alpha):" << (a / c) << "\ncos(alpha): " << (b / c) << "\ntan(alpha): " << a / b<<"\n";
        std::cout << "Beta: " << beta << " grados\n";
        std::cout <<"sen(beta) :" << (b / c) << "\ncos(beta) : " << (a / c) << "\ntan(beta) : " << b / a<<"\n";
        std::cout << "Perimetro: " << a + b + c << "\nArea:" << (a * b) / 2<<"\n";
        for (int i = 1; i <= a; i++) {
            if (a > 8) {
                a = 8;
            }
            if (i > 1) {
                std::cout << "@";
                for (int k = 1; k < i - 1; k++) {
                    std::cout << "*";
                }
                std::cout << "\n";
                if (i == a) {
                    for (int i = 1; i <= b; i++) {
                        std::cout << "@";
                    }
                }
            }
            }
    }
    return 0;
}

