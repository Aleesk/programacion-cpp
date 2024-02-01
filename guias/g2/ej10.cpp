/*Ejercicio 10. Desarrollar un programa en C, que pida por teclado la nota de una asignatura y
muestre por pantalla:
a) SOBRESALIENTE, en el caso de que la nota sea mayor o igual que 9 y menor o igual que 10.
b) NOTABLE, en el caso que la nota sea mayor o igual que 7 y menor que 9.
c) BIEN, en el caso de que la nota sea mayor o igual que 6 y menor que 7.
d) SUFICIENTE, en el caso de que la nota sea mayor o igual que 5 y menor que 6.
e) INSUFICIENTE, en el caso de que la nota sea mayor o igual que 3 y menor que 5,
f) MUY DEFICIENTE, en el caso de que la nota sea mayor o igual que 0 y menor que 3.
g) Error, NOTA INCORRECTA, en el caso de que la nota sea menor que 0 o mayor que 10.*/

#include <iostream>

using namespace std;

int main () {
    double nota;
    
    cout << "Ingrese la nota: ";
    cin >> nota;

    if (nota >= 9 && nota <= 10) {
        cout << "SOBRESALIENTE" << endl;

    } else if (nota >= 7 && nota < 9) {
        cout << "NOTABLE" << endl;

    } else if (nota >= 6 && nota < 7) {
        cout << "BIEN" << endl;

    } else if (nota >= 5 && nota < 6) {
        cout << "SUFICIENTE" << endl;

    } else if (nota >= 3 && nota < 5) {
        cout << "INSUFICIENTE" << endl;

    } else if (nota >= 0 && nota < 3) {
        cout << "MUY DEFICIENTE" << endl;

    } else if (nota < 0 || nota > 10) {
        cout << "Error, NOTA INCORRECTA" << endl;
    }
    
    return 0;
}