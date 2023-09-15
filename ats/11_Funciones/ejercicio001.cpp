/*
Ejercicio 1. Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros, multiplique estos dos números y despliegue el resultado.
*/
#include<iostream>
using namespace std;

void mult(double a, double b);

void ingresar();

double x, y;

int main(){

    ingresar();
    
    mult(x,y);

    return 0;
}

void mult(double a, double b){
    double c = 0;
    if(a != 0 && b != 0){
        c = a * b;

        cout<<"\nEl resultado es: "<<c<<endl;
    }
    else{
        cout<<"\nNo es posible realizar la operacion"<<endl;
    }
};

void ingresar(){
    cout<<"\nIngrese primer numero: ";
    cin>>x;
    cout<<"\nIngrese segundo numero: ";
    cin>>y;
};
