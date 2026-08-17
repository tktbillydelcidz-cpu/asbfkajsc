#include <iostream>
#include <conio.h>   // Para gotoxy y textcolor
#include <windows.h> // Para colores en Windows
using namespace std;

// Función para ubicar el cursor
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Función para cambiar color de texto
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    system("cls"); // Limpiar pantalla

    // Mostrar el nombre con color verde
    setColor(10);  
    gotoxy(10, 5);
    cout << "Mi nombre es: Billy Del Cid";

    // Dibujar un cuadrado con color amarillo
    setColor(14);  
    for (int i = 0; i < 6; i++) {
        gotoxy(10, 7 + i);
        for (int j = 0; j < 10; j++) {
            cout << "*";
        }
    }

    setColor(7); // Restaurar color blanco
    gotoxy(0, 15);
    cout << "Presione cualquier tecla para salir...";
    getch(); // Esperar una tecla
    return 0;
}

