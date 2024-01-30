/*7. Programa que te pide el radio de una circunferencia y te
calcula su area.*/
#include <iostream>

using namespace std;

int main () {
    double radio, area;
    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;

    area = radio * radio;

    cout << "El área de la circunferencia es " << area << "π" << endl;
    
    return 0;
}