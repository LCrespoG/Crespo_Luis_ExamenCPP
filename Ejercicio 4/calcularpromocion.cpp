#include "calcularpromocion.h"
#include <iostream>
#include <algorithm>
using namespace std;

int productospromocion()
{
    float precios[3];
    cout << "Ingrese el precio del primer artículo: ";
    cin >> precios[0];
    cout << "Ingrese el precio del segundo artículo: ";
    cin >> precios[1];
    cout << "Ingrese el precio del tercer artículo: ";
    cin >> precios[2];

    sort(precios, precios + 3); // Ordena de menor a mayor
    float total = precios[1] + precios[2]; // Suma los dos más caros

    cout << "El total a pagar con la promoción es: " << total << endl;
}