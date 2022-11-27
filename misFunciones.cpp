#include "misEstructuras.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

familia *familias = new familia[50];

// Modificar para tener más o menos familias
int numeroFamilia = 2;

// Modificar para tener más o menos hijos
int numeroHijos = 2;

void introducirDatos() {

    system("cls");

    // Funcion que recoge los datos escritos.

    for (int i = 0; i < numeroFamilia; i++) {

        cout << "Familia número: " << i+1 << endl;
        cout << endl;

        cout << "Datos del Responsable 1" << endl;
        cout << "-----------------------" << endl;

        cout << "Introduce el NIF" << endl;
        cin >> familias[i].responsable1.nif;
        cout << "Introduce el nombre" << endl;
        cin >> familias[i].responsable1.nombre;
        cout << "Introduce el apellido1" << endl;
        cin >> familias[i].responsable1.apellido1;
        cout << "Introduce el apellido2" << endl;
        cin >> familias[i].responsable1.apellido2;
        cout << "Introduce el email" << endl;
        cin >> familias[i].responsable1.email;
        cout << endl;

        cout << "Datos del Responsable 2" << endl;
        cout << "-----------------------" << endl;

        cout << "Introduce el NIF" << endl;
        cin >> familias[i].responsable2.nif;
        cout << "Introduce el nombre" << endl;
        cin >> familias[i].responsable2.nombre;
        cout << "Introduce el apellido1" << endl;
        cin >> familias[i].responsable2.apellido1;
        cout << "Introduce el apellido2" << endl;
        cin >> familias[i].responsable2.apellido2;
        cout << "Introduce el email" << endl;
        cin >> familias[i].responsable2.email;
        cout << endl;

        // Otro bucle for para recoger los datos de los hijos

        for (int j = 0; j < numeroHijos; j++) {

            cout << "Datos Hijo número: " << j+1 << endl;
            cout << "-----------------------" << endl;

            cout << "Introduce el DNI" << endl;
            cin >> familias[i].descendiente[j].dni;
            cout << "Introduce el nombre" << endl;
            cin >> familias[i].descendiente[j].nombre;
            cout << "Introduce el Fecha Nacimiento" << endl;
            cin >> familias[i].descendiente[j].fechaNacimiento;
            cout << endl;

        }

    }

}

void mostrarDatos() {

    system("cls");

    // Funcion para mostrar los datos recogidos de la funcion anterior.

    for (int i = 0; i < numeroFamilia; i++) {

        cout << "Responsable 1" << endl;
        cout << "-----------------------" << endl;

        cout << "NIF: " << endl;
        cout << familias[i].responsable1.nif << endl;
        cout << "Nombre: " << endl;
        cout << familias[i].responsable1.nombre << endl;
        cout << "Primer Apellido: " << endl;
        cout << familias[i].responsable1.apellido1 << endl;
        cout << "Segundo Apellido: " << endl;
        cout << familias[i].responsable1.apellido2 << endl;
        cout << "Correo Electronico" << endl;
        cout << familias[i].responsable1.email << endl;
        cout << endl;

        cout << "Responsable 2" << endl;
        cout << "-----------------------" << endl;

        cout << "NIF" << endl;
        cout << familias[i].responsable2.nif << endl;
        cout << "Nombre" << endl;
        cout << familias[i].responsable2.nombre << endl;
        cout << "Primer Apellido" << endl;
        cout << familias[i].responsable2.apellido1 << endl;
        cout << "Segundo Apellido" << endl;
        cout << familias[i].responsable2.apellido2 << endl;
        cout << "Correo Electronico" << endl;
        cout << familias[i].responsable2.email << endl;
        cout << endl;

        // Otro for para mostrar los datos de los hijos

        for (int j = 0; j < numeroHijos; j++) {

            cout << "Hijo número: " << j+1 << endl;
            cout << "-----------------------" << endl;

            cout << "DNI: " << endl;
            cout << familias[i].descendiente[j].dni << endl;
            cout << "Nombre: " << endl;
            cout << familias[i].descendiente[j].nombre << endl;
            cout << "Fecha Nacimiento: " << endl;
            cout << familias[i].descendiente[j].fechaNacimiento << endl;
            cout << endl;
        }

    }

}