/*
Ejercicio 2. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
Nombre, edad, promedio.
Se deben pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene mejor promedio y posteriormente imprimir los datos del alumno.
*/
#include<iostream>
#include<string.h>
using namespace std;

struct alumno {
    char nombre[30];
    int edad;
    double promedio;
    int mayor;
};

int main() {
    struct alumno alumnos[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nCapturando datos del alumno " << i + 1 << endl;
        cout << "\nIngrese nombre: ";
        cin.getline(alumnos[i].nombre, 30, '\n');
        cout << "Ingrese edad: ";
        cin >> alumnos[i].edad;
        cout << "Ingrese promedio: ";
        cin >> alumnos[i].promedio;
        cin.ignore(); 
    }

    int estudianteMayor = 0;
    for (int i = 1; i < 3; i++) {
        if (alumnos[i].promedio > alumnos[estudianteMayor].promedio) {
            estudianteMayor = i;
        }
    }

    alumnos[estudianteMayor].mayor = 1;

    cout << "\nDatos del estudiante con mejor promedio"<<endl;
    cout << "\nNombre: " << alumnos[estudianteMayor].nombre << endl;
    cout << "Edad: " << alumnos[estudianteMayor].edad << endl;
    cout << "Promedio: " << alumnos[estudianteMayor].promedio << endl;

    return 0;
}