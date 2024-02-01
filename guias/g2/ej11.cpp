/*Ejercicio 11. La empresa “Computer” es productora de 2 tipos de mallas: Mallas planas y Mallas en
rollo. La alta gerencia requiere controlar las ventas por día según las siguientes políticas: si el
comprador tiene más de 5 años adquiriendo malla en rollo tendrá un descuento del 8% en esta
malla. Si el comprador de malla plana por más de 6 años tendrá un descuento del 6% en esa malla.
El costo de la malla plana es de 400 pesos por metro y de la malla de rollo es de 250 pesos por
metro. Elabore un programa en C, que capture los metros a comprar por tipo de malla para un
cliente, además del tiempo en años que como comprador ha adquirido los tipos de mallas
existentes. La salida del programa será el porcentaje de descuento obtenido y la cantidad total en
pesos que obtuvo de descuento.*/

#include <iostream>
#include <string>

using namespace std;

int main () {
    int metros, anios, precio;
    string tipo;

    cout << "Ingrese la malla a comprar (rollo/plano): ";
    cin >> tipo;

    cout << "Ingrese los metros a comprar: ";
    cin >> metros;

    cout << "Ingrese el tiempo en años que ha sido comprador: ";
    cin >> anios;

    if (tipo == "rollo") {
        if (anios > 5) {
            precio = metros * 250 * 92/100;
            cout << "El descuento obtenido es de 8%, con un precio total de $" << precio << endl;
        } else {
            precio = metros * 250;
            cout << "No hay descuento, el precio total es de $" << precio << endl;
        }
    } else if (tipo == "plano") {
         if (anios > 6) {
            precio = metros * 400 * 94/100;
            cout << "El descuento obtenido es de 6%, con un precio total de $" << precio << endl;
        } else {
            precio = metros * 400;
            cout << "No hay descuento, el precio total es de $" << precio << endl;
        }
    } else {
        cout << "ERROR: vuelva a ingresar los datos." << endl;
    }
    return 0;
}