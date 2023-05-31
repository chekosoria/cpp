/*
Ejercicio 002. Escribe la siguiente expresión como expresión en C++:

a)  a + b 
   -------
    c + d
*/
#include <iostream>
using namespace std;

int main(){
    double a=0, b=0, c=0, d=0, x=0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"\nIngrese el valor de b: ";
    cin>>b;
    cout<<"\nIngrese el valor de c: ";
    cin>>c;
    cout<<"\nIngrese el valor de d: ";
    cin>>d;

    x = (a+b) / (c+d);

    cout.precision(3);
    cout<<"\nEl resultado de la operación es: "<<x<<endl;

    return 0;
}