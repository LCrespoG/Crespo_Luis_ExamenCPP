#include <iostream>
using namespace std;

int main() {
    const int num_calificaciones = 8;
    float calificaciones[num_calificaciones];
    float suma = 0;

    for (int i = 0; i < num_calificaciones; i++) {
        cout << "Ingrese la calificación " << (i + 1) << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    float promedio = suma / num_calificaciones;
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}
