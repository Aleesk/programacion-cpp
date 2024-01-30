/*2. Programa que convierte la cantidad de euros introducida
por el usuario a dolares (1 euro = 1,3215 dólares)*/

#include <iostream>

using namespace std;

int main () {
    double euros, dolares;

    cout << "Ingrese la cantidad de euros: ";

    cin >> euros;

    dolares = euros * 1.3215;

    cout << "La cantidad en dolares es $" << dolares << endl;

    return 0;
}
