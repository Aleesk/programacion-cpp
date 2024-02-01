/*Ejercicio 5. Calcular el mayor de tres números enteros.*/

#include <iostream>

using namespace std;

int main () {
    int n1, n2, n3;

    cout << "Ingresa tres números seguidos de espacios: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3) {
        cout << "El numero mayor es " << n1 << "." << endl;
    } else if (n2 > n1 && n2 > n3) {
        cout << "El numero mayor es " << n2 << "." << endl;
    } else if (n3 > n1 && n3 > n2) {
        cout << "El numero mayor es " << n3 << "." <<endl;
    } else {
        cout << "Hay números iguales, vuelva a ingresarlos." << endl;
    }

    return 0;
}