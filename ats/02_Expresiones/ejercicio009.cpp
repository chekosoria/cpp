/*
Ejercicio 009. Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x, y:
 
             √x
f(x,y) =  --------
           y^2 - 1
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x = 0, y = 0, f = 0;

    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"\nIngrese el valor de y: ";
    cin>>y;

    f = sqrt(x) / (pow(y,2) - 1);

    cout<<"\nEl resultado es: "<< f << endl;

    return 0;
}