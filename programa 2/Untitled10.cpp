#include <iostream>
using namespace std;

int main() {
    int minutos;
    int horas, minutos_restantes;

    // Pedir la cantidad de minutos
    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    // Convertir a horas y minutos
    horas = minutos / 60;
    minutos_restantes = minutos % 60;

    // Mostrar el resultado
    cout << minutos << " minutos equivalen a "
         << horas << " horas y "
         << minutos_restantes << " minutos." << endl;

    return 0;
}

