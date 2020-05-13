// ConsoleApplication3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

double pi = 3.14;
double perimetro=0;
int operacion;
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
double areacirculo(double radio,double &perimetro) {
    double area;
    perimetro = pi * (radio*2);
    std::cout << "El perimetro es: " << perimetro;
    area = pi * (radio*radio);
    std::cout << "El area del circulo es: ";
    return area;
}
double areacuadrado(double lado,double &perimetro) {
    double area;
    area = lado * lado;
    perimetro = lado * 4;
    std::cout << "El perimetro es: "<<perimetro<<"\n";
    std::cout << "El area del cuadrado es: ";
    return area;
}
void datos() {
    string nombre;
    int edad;
    int telefono;
    string direccion;
    string hobby;
    std::cout << "Ingrese su nombre:\n ";
    std::cin>>nombre;
    std::cout << "Ingrese su edad: \n";
    std::cin >> edad;
    std::cout << "Ingrese su numero celular: \n";
    std::cin >> telefono;
    std::cout << "Ingrese su dirección: \n";
    std::cin >> direccion;
    std::cout << "Ingrese su hobby: \n";
    std::cin >> hobby;
    std::cout << "Sus datos son:\n " << nombre << "\n" << edad << "\n" << telefono << "\n" << direccion << "\n" << hobby<<"n";
    return;
}
int calculadora(int operacion) {
    float a;
    float b;
    int c;
    std::cout << "Que operacion desea?\n" << "1.Suma\n" << "2.Resta\n" << "3.Multiplicacion\n" << "4.Division\n" << "5.Raiz cuadrada\n" << "Ingrese el numero de la operacion: ";
    cin >> operacion;
    switch (operacion)
    {
    case 1:
        cin >> a;
        cin >> b;

        c = a + b;
        cout << "La respuesta en enteros es:" << c << "\n";
        cout << "La respuesta en decimal es:";
        return a + b;
        break;
    case 2:
        cin >> a;
        cin >> b;
        c = a - b;
        cout << "La respuesta en enteros es:" << c << "\n";
        cout << "La respuesta en decimales es:";
        return a - b;
        break;
    case 3:
        cin >> a;
        cin >> b;
        c = a * b;
        cout << "La respuesta en enteros es:" << c << "\n";
        cout << "La respuesta en decimales es:";
        return a * b;
        break;
    case 4:
        cin >> a;
        cin >> b;
        if (b == 0 or a==0) {
            return 0;
        }
        else {
            c = a / b;
            cout << "La respuesta en enteros es:" << c << "\n";
            cout << "La respuesta en decimales es:";
            return a / b;
        }
        break;
    case 5:
        cin >> a;
        if (a <= 0) {
            std::cout << "No se puede realizar la operacion";
            return 0;
        }
        else {
            a = sqrt(a);
            cout << "La respuesta es :";
            return a;
        }
        break;
    default:cout << "El numero no es admitido";
        break;
    }
}
double areatriangulo(double base,double altura,double &perimetro) {
    double area;
    double c;
    c = sqrt((base*base)+(altura*altura));
    area = (base * altura) / 2;
    perimetro = base + altura + c;
    std::cout << "El perimetro del triangulo es: " << perimetro<<"\n";
    std::cout << "El area es: ";
    return area;
}
int main()
{
    int r;
    std::cin >> r;
    std::cout << areatriangulo(4, 3, perimetro);
    std::cout << perimetro;
    std::cout << areacirculo(r,perimetro);
    std::cout << perimetro;
}

