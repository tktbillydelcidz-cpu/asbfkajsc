#include <iostream>
#include <vector>
#include <set>
#include <iomanip>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

void listaOrdenada() {
  set<string> compras;
    compras.insert("Leche");
    compras.insert("Pan");
    compras.insert("Huevos");

     cout << "\nLISTA NO ORDENADA:\n";
    for (set<string>::iterator it = compras.begin(); it != compras.end(); ++it) {
       cout << "- " << compras[i] << endl;
      
    }
}

void listaNoOrdenada() {
    set<string> compras = {"Leche", "Pan", "Huevos"};

    cout << "\nLISTA NO ORDENADA:\n";
    for (string item : compras) {
        cout << "- " << item << endl;
    }
}

void mostrarTabla() {
    vector<Producto> productos = {
        {"Cuaderno", 10.00, 5},
        {"Lapiz", 2.00, 10}
    };

    cout << "\nTABLA DE PRODUCTOS:\n";
    cout << left << setw(15) << "Producto"
         << setw(10) << "Precio"
         << setw(10) << "Cantidad" << endl;

    cout << "---------------------------------\n";

    for (auto p : productos) {
        cout << left << setw(15) << p.nombre
             << setw(10) << p.precio
             << setw(10) << p.cantidad << endl;
    }
}

void contacto() {
    string nombre, correo, mensaje;

    cin.ignore();
    cout << "\nFORMULARIO DE CONTACTO\n";
    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Correo: ";
    getline(cin, correo);

    cout << "Mensaje: ";
    getline(cin, mensaje);

    cout << "\nGracias por contactarnos, " << nombre << ".\n";
}

int main() {
    int opcion;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Lista ordenada\n";
        cout << "2. Lista no ordenada\n";
        cout << "3. Tabla de productos\n";
        cout << "4. Contacto\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: listaOrdenada(); break;
            case 2: listaNoOrdenada(); break;
            case 3: mostrarTabla(); break;
            case 4: contacto(); break;
            case 5: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion invalida\n";
        }

    } while (opcion != 5);

    return 0;
}

