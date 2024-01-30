/*5. Programa conversor de caballos de vapor-watios. 1 CV
(Caballo de vapor) = 735,49875 W (Vatios)*/

#include <iostream>

using namespace std;

int main () {
    double caballos, vatios;

    cout << "Ingrese la cantidad en CV: ";
    cin >> caballos;

    vatios = caballos * 735.49875;

    cout << "La cantidad en vatios es " << vatios << endl; 

    return 0;
}