/*
Ejercicio 7. Escriba un programa que calcule el valor de: 1+2+3+4...n
*/
#include<iostream>

using namespace std;

int main(){
    int limite = 0, total = 0;

    cout<<"Ingrese el ultimo numero a sumar: ";
    cin>>limite;

    for(int i = 1; i <= limite; i++){
        total += i;
    }

    cout<<"\nEl resultado de sumar del 1 al "<<limite<<" es: "<<total;

    return 0;
}