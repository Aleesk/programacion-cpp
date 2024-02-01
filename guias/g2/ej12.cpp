/*Ejercicio 12. Realizar un menú de 5 opciones y mediante Switch ejecutar la opción que se desee.
En cada caso deberá pedir ingresar los argumentos necesarios para ejecutar la operación
solicitada. Entregar por pantalla el resultado. La forma del menú será la siguiente:

a) La potencia de un número entero
b) El área de un cuadrado
c) El área de un Triangulo
d) La Suma de 2 números
e) El producto de 2 números.*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    char opcion;
    double resultado;
    int base, exponente, lado, altura, num1, num2;

    cout << "Menú:" << endl;
    cout << "--------------------------------------" << endl;
    cout << "a) La potencia de un número entero" << endl;
    cout << "b) El área de un cuadrado" << endl;
    cout << "c) El área de un Triangulo" << endl;
    cout << "d) La Suma de 2 números" << endl;
    cout << "e) El producto de 2 números." << endl;
    cout << "--------------------------------------" << endl;
    cout << "" << endl;
    cout << "Seleccione una opción:";
    cin >> opcion;

    cout << "Usted ha seleccionado la opción: " << opcion << endl;

    switch (opcion) {
    case 'a':
        cout << "Ingrese la base: ";
        cin >> base;
        cout << "Ingrese el exponente: ";
        cin >> exponente;
        resultado = pow(base, exponente);
        cout << "La potencia es " << resultado << endl;
        break;

    case 'b':
        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado;
        resultado = pow(lado, 2);
        cout << "El área del cuadrado es " << resultado << endl;
        break;

    case 'c':
        cout << "Ingrese la base del triangulo: ";
        cin >> base;
        cout << "Ingrese la altura del triangulo: ";
        cin >> altura;
        resultado = (base * altura) / 2;
        cout << "El área del triangulo es " << resultado << endl;
        break;

    case 'd':
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        resultado = num1 + num2;
        cout << "La suma es " << resultado << endl;
        break;

    case 'e':
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        resultado = num1 * num2;
        cout << "El producto es" << resultado << endl;
        break;
    
    default:
        cout << "Opción no válida." << endl;
        break;
    }
    
    return 0;
}