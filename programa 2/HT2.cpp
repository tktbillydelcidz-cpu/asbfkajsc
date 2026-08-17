#include <iostream>
#include <locale.h>
using namespace std;
int main() {
setlocale(LC_ALL,"");
    int numero1, numero2, suma;

    // Solicita al usuario el primer número
    cout << "Ingrese el primer número entero: ";
    cin >> numero1;

    // Solicita al usuario el segundo número
    cout << "Ingrese el segundo número entero: ";
    cin >> numero2;

    // Calcula la suma 
    suma = numero1 + numero2;

    // Muestra el resultado                
    cout << "La suma de los dos números es: " << suma;

    return 0;
}
