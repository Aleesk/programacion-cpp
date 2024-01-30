/*4. Programa que pide al usuario una cantidad y un porcentage
y este calcula la cantidad de ese porcentaje sobre la
magnitud inicial.*/

#include <iostream>

using namespace std;

int main () {
    int cantidad, porcentaje, cantidadfinal;

    cout << "Ingrese una cantidad: ";
    cin >> cantidad;

    cout << "Ingrese una porcentaje(sin el %): ";
    cin >> porcentaje;

    cantidadfinal = cantidad * porcentaje/100;

    cout << "El " << porcentaje << "% " << "de " << cantidad << " es " << cantidadfinal << endl;

    return 0;
}