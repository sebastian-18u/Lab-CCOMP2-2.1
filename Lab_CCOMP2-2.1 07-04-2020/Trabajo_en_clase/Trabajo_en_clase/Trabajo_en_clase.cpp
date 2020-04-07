#include<string>
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    //Ejercicio 1
    /* string nombre;
    int edad;
    int telefono;
    string direccion;
    string hobby;
    std::cout << "Ingrese su nombre:\n ";
    std::cin >> nombre;
    std::cout << "Ingrese su edad: \n";
    std::cin >> edad;
    std::cout << "Ingrese su numero celular: \n";
    std::cin >> telefono;
    std::cout << "Ingrese su dirección: \n";
    std::cin >> direccion;
    std::cout << "Ingrese su hobby: \n";
    std::cin >> hobby;
    std::cout << "Sus datos son:\n " << nombre << "\n" << edad << "\n" << telefono << "\n" << direccion << "\n" << hobby;*/
    //Ejercicio 2
    /*float a;
    float b;
    int c;
    int operacion;
    std::cout << "Que operacion desea?\n" << "1.Suma\n" << "2.Resta\n" << "3.Multiplicacion\n" << "4.Division\n" << "5.Raiz cuadrada\n" << "Ingrese el numero de la operacion: ";
    cin >> operacion;
    switch (operacion)
    {
    case 1:
        cin>>a;
        cin >> b;

        c = a + b;
        cout << "La respuesta en enteros es:" << c<<"\n";
        cout << "La respuesta en decimal es:" << a + b;
        break;
    case 2:
        cin >> a;
        cin >> b;
        c = a - b;
        cout << "La respuesta en enteros es:" << c << "\n";
        cout << "La respuesta en decimales es:" << a - b;
        break;
    case 3:
        cin >> a;
        cin >> b;
        c = a * b;
        cout << "La respuesta en enteros es:" << c << "\n";
        cout << "La respuesta en decimales es:" << a * b;
        break;
    case 4:
        cin >> a;
        cin >> b;
        c = a / b;
        cout << "La respuesta en enteros es:" << c << "\n";
        cout << "La respuesta en decimales es:" << a / b;
        break;
    case 5:
        cin >> a;
        a = sqrt(a);
        cout << "La respuesta es :" << a;

    default:cout<<"El numero no es admitido;
        break;
    }*/
    //Ejercicio 3
    string figura;
    cin >> figura;
    if (figura == "circulo") {
        double pi = 3.14;
        int radio;
        cout << "Ingrese el radio del circulo: ";
        cin >> radio;
        double area1;
        area1 = pi * radio;
        cout << "El area del circulo es: " << area1;
    }
    if (figura == "cuadrado") {
        int lado;
        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado;
        lado *= lado;
        cout << "El area del cuadrado es: " << lado;
    }
    if (figura == "triangulo") {
        int opcion;
        cout << "1. Triangulo rectangulo\n" << "2.Triangulo equilatero\n" << "3.Triangulo isosceles\n" << "4.Triangulo escaleno\n" << "Ingrese un numero: ";
        cin >> opcion;
        switch (opcion)
        {case 1:
            int base;
            int altura;
            cout << "Ingrese los valores\n" << "base:";
            cin >> base;
            cout << "Altura:";
            cin >> altura;
            int area1;
            area1 = base * altura;
            cout << area1;
            break;
        case 2: {
            double dato = (sqrt(3) / 4);
            double lado;
            cin >> lado;
            lado *= lado;
            double area;
            area = dato * lado;
            cout << "El area es :" << area;
            break; }
        case 3: {
            int lado;
            cin >> base;
            cin >> lado;
            double area;
            lado *= lado;
            double raiz = (lado) - ((base * base) / 4);
            area = (base * raiz) / 2;
            cout << "El area es:" << area;
            break; }
        case 4: {
            double lado_a;
            double lado_b;
            double lado_c;
            float semi_p;
            cin >> lado_a >> lado_b >> lado_c;
            semi_p = (lado_a + lado_b + lado_c) / 2;
            
            double area = sqrt(semi_p * (semi_p - lado_a) * (semi_p - lado_b) * (semi_p - lado_c));
            cout << "El area es: " << area;
            break; }
            
        
        default:
            cout << "El numero no es aceptado";
            break;
        }

    }


}




