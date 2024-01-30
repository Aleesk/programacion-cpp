/*6. Programa que pasa de grados centigrados a grados kelvin
(Kelvin = Celcius + 273,15)*/

#include <iostream>

using namespace std;

int main () {
    double celcius, kelvin;

    cout << "Ingrese la temperatura en grados centigrados: ";
    cin >> celcius;

    kelvin = celcius + 273.15;

    cout << "La temperatura en grados kelvin es " << kelvin << "°"<< endl; 

    return 0;
}