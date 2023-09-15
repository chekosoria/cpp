/*
Ejercicio 5. Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del argumento unico que se le transmite cuando es invocada la funcion.
*/
#include<iostream>
using namespace std;

template <class T>
void despliegue(T midato);

int main(){
    int miEntero = 3;
    double miDecimal = 3.1415;
    char miChar = 'S';

    despliegue(miEntero);
    despliegue(miDecimal);
    despliegue(miChar);

    return 0;
}

template <class T>
void despliegue(T midato){
    cout << "El dato ingresado es: " << midato << endl;
};