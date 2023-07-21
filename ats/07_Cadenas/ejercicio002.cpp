/*
Ejercicio 2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de
caracteres
*/
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char miCadena1[50];
    char miCadena2[50];

    cout<<"Ingrese una cadena: ";
    cin.getline(miCadena1,50,'\n');

    strcpy(miCadena2,miCadena1);

    cout<<"\nLa cadena ingresada es: "<<miCadena2<<endl;

    return 0;
}