#include <iostream>

using namespace std;

// Estructuras usadas para cada usuario el cual se recoge los datos

struct persona {
    int nif;
    string nombre;
    string apellido1;
    string apellido2;
    string email;
};

struct hijos {
    int dni;
    string nombre;
    string fechaNacimiento;
};

struct familia {
    persona responsable1;
    persona responsable2;
    hijos descendiente[5];
};