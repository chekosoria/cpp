/*
Ejercicio 1. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena,
si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char cadena[50];
    int x;
    
    cout<<"Ingrese cadena de caracteres: ";
    cin.getline(cadena,50,'\n');

    x = strlen(cadena);

    if(x > 10){
        cout<<"\nLa cadena "<<cadena<<" es mayor a 10 caracteres"<<endl;
    }

    return 0;
}