#include "funcnum.h"
#include <iostream>
using namespace std;

int numselec()
{
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }
}