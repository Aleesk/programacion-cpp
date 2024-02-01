/*Ejercicio 9. Dados ciertos centímetros como entrada de tipo decimal, escribir su equivalente a pies
(enteros) y pulgadas (decimal), dando las pulgadas con una precisión de 1 lugar decimal.
Considerar 2.54 cm por pulgada y 12 pulgadas por pie. La salida podrá ser: 333.3 cm son 10 pies y
11.2 pulgadas.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double longitudCm, longitudPulgadas, pulgadas;
    int pies; 

    cout << "Ingrese la longitud en centímetros: ";
    cin >> longitudCm;

    longitudPulgadas = longitudCm / 2.54;

    pies = longitudPulgadas / 12;
    
    pulgadas = fmod(longitudPulgadas, 12.0);

    cout.precision(1);
    cout << fixed;
    cout << longitudCm << " cm son " << pies << " pies y " << pulgadas << " pulgadas." << endl;

    return 0;
}