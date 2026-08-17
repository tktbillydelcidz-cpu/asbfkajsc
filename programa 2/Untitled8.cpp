#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese la cantidad de numeros pares a sumar: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += 2 * i;  // El i-ésimo número par es 2*i
    }

    cout << "La suma de los primeros " << n << " numeros pares es: " << suma << endl;

    return 0;
}

