/*
Ejercicio 004. Escribe la siguiente expresión como expresión en C++:

a)        
           b
    a + -------
         c - d

*/
#include <iostream>
using namespace std;

int main(){
    double a=0, b=0, c=0, d=0, x=0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<"Ingrese el valor de c: ";
    cin>>c;
    cout<<"Ingrese el valor de d: ";
    cin>>d;

    x = a + (b / (c-d));

    cout<<"\nEl resultado de la expresión es: "<<x<<endl;

    return 0;
}