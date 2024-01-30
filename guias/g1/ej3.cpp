/*3. Programa que calcula la multiplicacion progresiva de 3
numeros introducidos por el usuario.*/

#include <iostream>

using namespace std;

int main () {

    int n1, n2, n3, multiplicacion;

    cout << "Ingrese 3 números separados por espacios: ";

    cin >> n1 >> n2 >> n3;

    multiplicacion = n1 * n2 * n3;

    cout << "El valor de la multiplicación progresiva es: " << multiplicacion << endl;

    return 0;
}