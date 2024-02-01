/*Ejercicio 8. Diseñar un algoritmo que calcule la longitud de la circunferencia y el área del círculo de
radio dado.*/

#include <iostream>

using namespace std;

int main () {
    double radio, longitud, area;

    cout << "Ingrese el radio: ";
    cin >> radio;

    longitud = 2 * radio;
    area = radio * radio;

    cout << "La longitud de la circunferencia es " << longitud << "π." << endl;
    cout << "El área del circulo es " << area << "π." << endl;
    
    return 0;
}