/*
Ejercicio 3. Escribe un programa que lea de la entrada estándar un vector de números y muestre en la salida estándar los números del
vector con sus índices asociados
*/
#include<iostream>
using namespace std;

int main(){
    int x = 0;

    cout<<"Ingrese la cantidad de elementos que desea tener en arreglo: ";
    cin>>x;

    int numeros[x];

    cout<<"Almacenando los valores del arreglo..."<<endl;

    for(int i = 0; i < x; i++){
        cout<<"\nIngrese el valor del elemento: ";
        cin>>numeros[i];
    }

    cout<<"Imprimiendo los valores del arreglo...."<<endl;

    for(int j = 0; j < x; j++){
        cout<<"numeros:["<<j<<"] = "<<numeros[j]<<endl;
    }

    return 0;
}