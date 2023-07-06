/*
Ejercicio 6. Escriba unprograma que calcule x a la y donde tanto x como y sean enteros positivos, sin utilizar la función pow
*/
#include<iostream>

using namespace std;

int main(){
    int x=0, y=1, resultado=1;

    cout<<"Ingrese un numero: ";
    cin>>x;
    cout<<"Ingrese la potencia a la que quiere elevar "<<x<<" : ";
    cin>>y;

    for(int i=1; i <= y; i++){
        resultado *= x;
    }

    cout<<"\nEl resultado de elevar "<<x<<" a la "<<y<<" es: "<<resultado<<endl;

    return 0;
}