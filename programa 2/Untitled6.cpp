#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Contador regresivo desde " << numero << " hasta 1:" << endl;

    for (int i = numero; i >= 1; i--) {
        cout << i << endl;
    }

    return 0;
}

