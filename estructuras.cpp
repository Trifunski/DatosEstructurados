#include "misFunciones.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    SetConsoleOutputCP(65001);

    // Muy Pequeño menú para mostrar al usuario al acceder al programa
    
    cout << "Datos Estructurados" << endl;
    cout << endl;

    cout << "Presiona enter para continuar" << endl;
    cout << endl;

    getch();

    // Llamamos a las funciones qué utilizaremos

    introducirDatos();
    mostrarDatos();

    getch();

}