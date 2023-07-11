/*
Ejercicio 5. Escribe un programa que lea de la entrada estándar un vector de números y determine el mayor elemento del vector
*/
#include<iostream>
using namespace std;

int main(){
    int x = 0, mayor = 0;

    cout<<"Ingrese la cantidad de elementos que desea tener en arreglo: ";
    cin>>x;

    int numeros[x];

    cout<<"Almacenando los valores del arreglo..."<<endl;

    for(int i = 0; i < x; i++){
        cout<<"\nIngrese el valor del elemento: ";
        cin>>numeros[i];
    }

    cout<<"Buscando el numero mayor...."<<endl;

    mayor = numeros[0];

    for(int j = 1; j < x; j++){
        if(numeros[j] > mayor){
            mayor = numeros[j];
        }
    }

    cout<<"\nEl numero mayor del arreglo es: "<<mayor<<endl;

    return 0;
}