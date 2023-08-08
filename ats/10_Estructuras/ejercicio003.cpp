/*
Ejercicio 3. Realizar un programa que lea de un arreglo de estructuras los datos de N empleados de la empresa y que imprima
los datos del empleado con mayor y menor salario
*/
#include<iostream>
#include<string.h>
using namespace std;

struct empleado {
    char nombre[30];
    int edad;
    double sueldo;
    int menor;
    int mayor;
};

int main() {
    int x;

    cout << "Ingrese la cantidad de empleados que desea capturar: ";
    cin >> x;
    cin.ignore(); 

    struct empleado empleados[x];

    for (int i = 0; i < x; i++) {
        cout << "\nCapturando datos del empleado " << i + 1 << endl;
        cout << "\nIngrese nombre: ";
        cin.getline(empleados[i].nombre, 30, '\n');
        cout << "Ingrese edad: ";
        cin >> empleados[i].edad;
        cout << "Ingrese sueldo: ";
        cin >> empleados[i].sueldo;
        cin.ignore(); 
    }

    int empleadoMayor = 0;
    for (int i = 1; i < x; i++) {
        if (empleados[i].sueldo > empleados[empleadoMayor].sueldo) {
            empleadoMayor = i;
        }
    }

    int empleadoMenor = 0;
    for (int i = 1; i < x; i++) {
        if (empleados[i].sueldo < empleados[empleadoMenor].sueldo) {
            empleadoMenor = i;
        }
    }

    empleados[empleadoMayor].mayor = 1;

    cout << "\nDatos del empleado con mejor sueldo"<<endl;
    cout << "\nNombre: " << empleados[empleadoMayor].nombre << endl;
    cout << "Edad: " << empleados[empleadoMayor].edad << endl;
    cout << "Sueldo: " << empleados[empleadoMayor].sueldo << endl;

    empleados[empleadoMenor].menor = 1;

    cout << "\nDatos del empleado con menor sueldo"<<endl;
    cout << "\nNombre: " << empleados[empleadoMenor].nombre << endl;
    cout << "Edad: " << empleados[empleadoMenor].edad << endl;
    cout << "Sueldo: " << empleados[empleadoMenor].sueldo << endl;

    return 0;
}