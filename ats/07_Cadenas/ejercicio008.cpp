/*
Ejercicio 8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos a sus respectivos valores
y por último sumarlos
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    char entero[30];
    char real[30];
    int x;
    float y, suma = 0;

    cout<<"Ingrese un numero entero: ";
    cin.getline(entero,30,'\n');

    x = atoi(entero);

    cout<<"\nIngrese un numero decimal: ";
    cin.getline(real,30,'\n');

    y = atof(real);

    suma = x + y;

    cout<<"\nLa suma de los numeros ingresados es: "<<suma<<endl;

    return 0;
}