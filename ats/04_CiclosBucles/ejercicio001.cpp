/*
Ejercicio 1. Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar
su tabla de multiplicar.
*/
#include<iostream>

using namespace std;

int main(){
    int i=1, numero=0;

    cout<<"Ingrese un numero entre 1-10: ";
    cin>>numero;

    if(numero >=1 && numero <=10){

    while (i<=10)
    {
        cout<<numero<<"X"<<i<<"="<<i*numero<<endl;
        i++;
    }
    }
    else{
        cout<<"Numero fuera de rango";
    }
    

    return 0;
}