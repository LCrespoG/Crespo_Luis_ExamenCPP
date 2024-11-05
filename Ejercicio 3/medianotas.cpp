#include "medianotas.h"
#include <iostream>
using namespace std;

int calcularmedia()
{
    //declaro constante num calificaciones para ajustar el numero de calificaciones que quiero
    const int num_calificaciones = 8;
    float calificaciones[num_calificaciones];
    float suma = 0;

    //cuenta regresiva con fot para que me pida una a una la calificacion
    for (int i = 0; i < num_calificaciones; i++) {
        cout << "Ingrese la calificación " << (i + 1) << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    //finalmente, hago un pomedio de los datos adquiridos
    float promedio = suma / num_calificaciones;
    cout << "El promedio de las calificaciones es: " << promedio << endl;
}