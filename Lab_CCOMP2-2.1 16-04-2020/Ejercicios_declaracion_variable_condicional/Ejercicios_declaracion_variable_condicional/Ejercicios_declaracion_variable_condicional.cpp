// Ejercicios_declaracion_variable_condicional.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ejercicios_declaracion_variable_condicional.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>

int main()
{
    //Ejercicio 1
    int a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout <<"Suma: "<< a + b << "\n" <<"Resta: "<< a - b << "\n" <<"Multiplicacion: "<< a * b << "\n";
    if (a == 0) {
        std::cout << "0\n";
    }
    else if (b == 0) {
        std::cout << "No se puede realizar la operacion\n";
    }
    if (a != 0 and b  != 0){
        float af = a;
        float bf = b;
        std::cout << "Division: " << af / bf << "\n";
        std::cout << a % b << "\n"; 
        if (a % b == 0) {
            std::cout << b << " es divisor de\n " << a;
        }
        else if (b % a == 0 and a != 0) {
            std::cout << a << " es divisor de\n " << b;
        }
    }
    if (a > b) {
        std::cout << a << " es mayor\n";
    }
    else if (b > a) {
        std::cout << b << " es el mayor\n";
    }
    else {
        std::cout << "Ambos numeros son iguales\n";
    }
    //Ejercicio 2
    char operador;
    double ope1, ope2;
    std::cout << "Ingrese los dos operandos\n";
    std::cin >> ope1;
    std::cin >> ope2;
    std::cout << "Ingrese la operacion que desee: ";
    std::cin >> operador;
    if (operador == '+') {
        std::cout << ope1 + ope2;
    }
    else if (operador == '-') {
        std::cout << ope1 - ope2;
    }
    else if (operador == '*') {
        std::cout << ope1 * ope2;
    }
    else if (operador == '/') {
        if (a != 0 and b != 0) {
            std::cout << ope1 / ope2;
        }
        else {
            std::cout << "No se puede realizar la operacion";
        }
    }
    else if (operador == '%') {
        if (a != 0 and b != 0) {
            int q = ope1;
            int w = ope2;
            std::cout << q % w;
        }
        else {
            std::cout << "No se puede realizar la operacion";
        }
    }
    else if (operador == '~') {
        std::wcout << "Ingrese el numero a sacar raiz: ";
        int z;
        std::wcin >> z;
        std::wcout << sqrt(z);
    }

}
