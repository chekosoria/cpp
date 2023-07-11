/*
Ejercicio 1. Escribe un programa que defina un vector de números y calcule la suma de sus elementos
*/
#include<iostream>
using namespace std;


int main(){
    int numeros[] = {5,15,45,135,405};
    int suma = 0, arrSize=0;

    arrSize = sizeof numeros/sizeof numeros[0];

    for(int i = 0; i < arrSize; i++){
        suma += numeros[i];
    }

    cout<<"La suma de los elementos del arreglo es: "<<suma<<endl;

    return 0;
}