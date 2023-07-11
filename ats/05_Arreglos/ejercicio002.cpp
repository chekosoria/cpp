/*
Ejercicio 2. Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.
*/
#include<iostream>
using namespace std;


int main(){
    int numeros[] = {5,15,45,135,405};
    int arrSize=0, producto = 1;

    arrSize = sizeof numeros/sizeof numeros[0];

    for(int i = 0; i < arrSize; i++){
        producto *= numeros[i];
    }

    cout<<"El producto de los elementos del arreglo es: "<<producto<<endl;

    return 0;
}