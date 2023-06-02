/*
Ejercicio 005. Escriba un fragmento de programa que intercambie los valores de dos variables.
*/
#include <iostream>
using namespace std;

int main(){
    double a,b,c;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;

    c = a;
    a = b;
    b = c;

    cout<<"\nEl nuevo valor de a es: "<<a<<endl;
    cout<<"El nuevo valor de b es: "<<b<<endl;
    
    return 0;
}