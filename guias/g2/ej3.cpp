/*A partir del precio de un producto, incremente el precio en un 11% si su valor es
inferior a $1.500 pesos, además imprimir el nuevo precio del producto.*/

#include <iostream>

using namespace std;

int main () {
    int precio, incremento;

    cout << "Ingrese el precio del producto: ";

    cin >> precio;

    incremento = precio * 111/100;

    if (precio < 1500){
        cout << "El nuevo precio del producto con un incremento del 11% es de: " << incremento << endl;
    } else {
        cout << "El precio del producto se mantiene: " << precio << endl;
    }
    
    return 0;
}