#include <iostream>
#include <string>
using namespace std;

int main() {
    string contrasena;
    string correcta = "admin123";

    do {
        cout << "Ingrese la contrasena: ";
        cin >> contrasena;

        if (contrasena != correcta) {
            cout << "Contrasena incorrecta. Intente de nuevo." << endl;
        }
    } while (contrasena != correcta);

    cout << "Acceso concedido. Bienvenido!" << endl;

    return 0;
}

