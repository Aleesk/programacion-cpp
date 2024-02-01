/*Ejercicio 7. De 10 números ingresados indicar cuántos son mayores a cero y cuántos son menores
a cero.*/

#include <iostream>

using namespace std;

int main () {
    int numeros[10];
    int mayores = 0;
    int menores = 0;

    cout << "Ingrese 10 números: " << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
        if (numeros[i] > 0) {
            mayores++;
        } else if (numeros[i] < 0) {
            menores++;
        }
    }

    cout << "Cantidad de números mayores a 0: " << mayores << endl;
    cout << "Cantidad de números menores a 0: " << menores << endl;
    
    return 0;
}