/*Ejercicio 4. Determinar la cantidad de dinero que recibirá un trabajador por concepto de las horas
extras trabajadas en una empresa, sabiendo que cuando las horas de trabajo exceden de 40, el
resto se consideran horas extras y que éstas se pagan al doble de una hora normal cuando no
exceden de 8; si las horas extras exceden de 8 se pagan las primeras 8 al doble de lo que se paga
por una hora normal y el resto al triple.*/

#include <iostream>

using namespace std;

int main () {
    int  horas, normal, extrasdoble, extrastriple, salario, horasextras;

    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> horas;

    cout << "Ingrese el salario normal por hora trabajada: ";
    cin >> salario;

    normal = salario * horas;
    extrasdoble = (salario * 40 )+ ((horas - 40) * salario * 2);
    extrastriple = (salario * 40) +( 8 * salario * 2) + ((horas - 48) * salario * 3);

    if (horas <= 40){
        cout << "El salario del trabajador es de: $" << normal << endl;
    } else if (horas > 40 && horas <= 48) {
        cout << "El salario del trabajador es de: $" << extrasdoble << endl;
    } else {
        cout << "El salario del trabajador es de: $" << extrastriple << endl;
    }

    return 0;
}