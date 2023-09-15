/*
Ejercicio 2. Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se les transmite y despliegue el resultado.
La función deberá ser capaz de elevar al cuadrado números flotantes.
*/
#include<iostream>
#include<math.h>
using namespace std;

void al_cuadrado(double a);

void ingresar();

double x;

int main(){

    ingresar();
    
    al_cuadrado(x);

    return 0;
}

void al_cuadrado(double a){
    double c = 0;
    if(a >= 0){
        c = pow(a,2);

        cout<<"\nEl resultado es: "<<c<<endl;
    }
    else{
        a *= -1;
        c = pow(a,2);

        cout<<"\nEl resultado es: "<<c<<endl;
    }
};

void ingresar(){
    cout<<"\nIngrese numero: ";
    cin>>x;
};
