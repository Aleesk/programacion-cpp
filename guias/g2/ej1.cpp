/*Ejercicio 1. Invertir un número de 3 dígitos, ej. 123 -> 321.*/

#include <iostream>

using namespace std;

int main () {
    int numero, centena, decena, unidad;
    cout << "Ingresa el número a invertir: ";
    cin >> numero;

    centena = numero / 100;
    decena = (numero / 10) % 10;
    unidad = numero % 10;

    cout << "Número invertido: " << unidad << decena << centena << endl;
    
    return 0;
}