#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, nota4, promedio;

    // Solicitar las 4 notas al usuario
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;
    cout << "Ingrese la cuarta nota: ";
    cin >> nota4;

    // Calcular el promedio
    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    // Mostrar el promedio
    cout << "El promedio de las 4 notas es: " << promedio << endl;

    // Evaluar el rango y mostrar mensaje
    if (promedio >= 0 && promedio <= 59) {
        cout << "Debe mejorar." << endl;
    } 
    else if (promedio >= 60 && promedio <= 69) {
        cout << "Vamos, tú puedes mejorar." << endl;
    } 
    else if (promedio >= 70 && promedio <= 89) {
        cout << "Buen trabajo." << endl;
    } 
    else if (promedio >= 90 && promedio <= 100) {
        cout << "Excelente trabajo." << endl;
    } 
    else {
        cout << "Error: el promedio ingresado no es válido." << endl;
    }

    return 0;
}

