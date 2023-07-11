/*
Ejercicio 6. Escribe un programa que lea de la entrada estándar un vector de números y calcule si existe algun elemento cuyo valor equivale
a la suma del resto de números del vector
*/
#include<iostream>
using namespace std;

int main(){
    int x = 0, suma = 0;

    cout<<"Ingrese la cantidad de elementos que desea tener en arreglo: ";
    cin>>x;

    int numeros[x];

    cout<<"Almacenando los valores del arreglo..."<<endl;

    for(int i = 0; i < x; i++){
        cout<<"\nIngrese el valor del elemento: ";
        cin>>numeros[i];
        suma += numeros[i];
    }

    cout<<"Buscando equivalencias...."<<endl;

    for(int j = 0; j < x; j++){
        if(numeros[j] == (suma - numeros[j])){
            cout<<"El elemento numeros["<<j<<"] : "<<numeros[j]<<" es igual a la suma del resto de elementos del arreglo";
        }
    }

    return 0;
}