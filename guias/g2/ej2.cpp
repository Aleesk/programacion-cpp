/*Ejercicio 2. Escriba un programa que imprima en pantalla si un año (ingresado por teclado) es
bisiesto o no. Recuerde que un año es bisiesto si y sólo si cumple una de las siguientes condiciones
(1) es divisible por 4 y no por 100, ó (2) es divisible por 400.*/

#include <iostream>

using namespace std;

int main () {
    
    int anio;

    cout << "Ingrese el año: ";

    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
        cout << "El año " << anio << " es bisiesto." << endl;
    } else {
        cout << "El año " << anio << " no es bisiesto." << endl;
    }

    return 0;
}