/*
Ejercicio 4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos:
nombre, país, numero_medallas y devuelva los datos Nombre y país del atleta que ha ganado el mayor número de medallas
*/
#include<iostream>
#include<string.h>
using namespace std;

struct atleta {
    char nombre[30];
    char pais[30];
    int medallas;
    int mayor;
};

int main() {
    int x;

    cout << "Ingrese la cantidad de atletas que desea capturar: ";
    cin >> x;
    cin.ignore(); 

    struct atleta atletas[x];

    for (int i = 0; i < x; i++) {
        cout << "\nCapturando datos del atleta " << i + 1 << endl;
        cout << "\nIngrese nombre: ";
        cin.getline(atletas[i].nombre, 30, '\n');
        cout << "\nIngrese pais: ";
        cin.getline(atletas[i].pais, 30, '\n');
        cout << "Ingrese la cantidad de medallas ganadas: ";
        cin >> atletas[i].medallas;
        cin.ignore(); 
    }

    int atletaMayor = 0;
    for (int i = 1; i < x; i++) {
        if (atletas[i].medallas > atletas[atletaMayor].medallas) {
            atletaMayor = i;
        }
    }


    atletas[atletaMayor].mayor = 1;

    cout << "\nDatos del atleta con mas medallas"<<endl;
    cout << "\nNombre: " << atletas[atletaMayor].nombre << endl;
    cout << "Pais: " << atletas[atletaMayor].pais << endl;

    return 0;
}