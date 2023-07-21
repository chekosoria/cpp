/*
Ejercicio 6. Hacer un programa que convierta dos cadenas de minusculas a mayusculas, las compare y muestre si son iguales o no
*/
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra1[30];
    char palabra2[30];

    cout<<"Ingrese primera palabra: ";
    cin.getline(palabra1,30,'\n');

    cout<<"Ingrese segunda palabra: ";
    cin.getline(palabra2,30,'\n');

    strupr(palabra1);
    strupr(palabra2);

    if(strcmp(palabra1,palabra2) == 0){
        cout<<"\nLas palabras son iguales"<<endl;
    }
    else{
        cout<<"\nLa palabra NO son iguales"<<endl;
    }
    
    return 0;
}