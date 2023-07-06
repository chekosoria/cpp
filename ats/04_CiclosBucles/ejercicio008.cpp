/*
Ejercicio 8. Escriba un programa que calcule el valor de: 1+3+5+7...+2n-1
*/
#include<iostream>

using namespace std;

int main(){
    int limite = 0, total = 0;

    cout<<"Ingrese el ultimo numero a sumar: ";
    cin>>limite;

    for(int i = 1; i < limite; i+=2){
        total += i;
    }

    cout<<"\nEl resultado es: "<<total;

    return 0;
}