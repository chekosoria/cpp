/*
Ejercicio 010. Escriba un programa que calcule las soluiones de una exuación de segundo grado de la forma "ax^2 + bx + c = 0" usando la formula
general de las ecuaciones de segundo grado
 
     -b +- √b^2 - 4ac
x =  -------------------
            2a
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

    cout<<"Escriba el valor de a: "; 
    cin>> a; 
    cout<<"\nEscriba el valor de b: "; 
    cin>> b; 
    cout<<"\nEscriba el valor de c: "; 
    cin>> c;
    cout<<"\n------------------------------"<<endl;
    cout<<"Se resolvera la ecuacion "<< "(" << a << "x^2) + (" << b <<"x) + (" << c << ") = 0" << endl;
    cout<<"\n------------------------------"<<endl;

    x1 = (-1 * (b) + sqrt((pow(b,2)) - (4 * (a * c)))) / 2 * a;
    x2 = (-1 * (b) - sqrt((pow(b,2)) - (4 * (a * c)))) / 2 * a;

    cout<<"El resultado de x1 es: " << x1 << endl;
    cout<<"El resultado de x2 es: " << x2 << endl;

    return 0;
}