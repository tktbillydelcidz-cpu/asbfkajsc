
#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    // Pedir datos al usuario
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    // Calcular el área
    area = (base * altura) / 2;

    // Mostrar resultado
    cout << "El area del triangulo es: " << area << endl;

    return 0;
}
