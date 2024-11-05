#include "funcnum.h"
#include <iostream>
using namespace std;

int numselec()
{
    //creo variable int numero y muestro en pantalla texto de apoyo para con cin asignar un numero a la variable numero.
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    //dentro del if voy clasificando el numero que es, empezando por el positivo, seguido del negativo y por ultimo el 0 que es un caso excepcional.
    //ademas hago cout de la solucion que me ha dado y asi saber que fase del if se ha quedado.
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }
}