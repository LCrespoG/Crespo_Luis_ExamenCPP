#include "numsemana.h"
#include <iostream>
using namespace std;

int numsemana()
{
    int dia;
    cout << "Ingrese un número del 1 al 7: ";
    cin >> dia;

    switch(dia) {
    case 1: cout << "Lunes" << endl; break;
    case 2: cout << "Martes" << endl; break;
    case 3: cout << "Miércoles" << endl; break;
    case 4: cout << "Jueves" << endl; break;
    case 5: cout << "Viernes" << endl; break;
    case 6: cout << "Sábado" << endl; break;
    case 7: cout << "Domingo" << endl; break;
    default: cout << "Número no válido" << endl; break;

    }
}