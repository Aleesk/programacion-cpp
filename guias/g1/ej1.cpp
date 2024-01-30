//1. Programa que calcula ecuaciones de 1o grado (AX + B = 0)

#include <iostream>

using namespace std;

int main () {
    double A, B, solucion;

    cout << "Ingrese el coeficiente A: ";
    cin >> A;

    cout << "Ingrese el coeficiente B: ";
    cin >> B;

    solucion = -B/A;

    cout << "La solucion de la ecuación es x = " << solucion << endl;
    
    return 0;
}