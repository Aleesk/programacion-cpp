/*Ejercicio 6. Escribir el algoritmo necesario para calcular y mostrar el cuadrado de un número. El
número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número
debe ser mayor que cero".*/

#include <iostream>

using namespace std;

int main () {
    int numero, resultado;

    cout << "Ingrese el número: ";
    cin >> numero;

    resultado = numero * numero;

    if (numero > 0) {
        cout << "El cuadrado de " << numero << " es " << resultado << endl;
    } else {
        cout << "ERROR, el número debe ser mayor que cero" << endl;
    }

    return 0;
} 