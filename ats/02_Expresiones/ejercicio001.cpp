/*
Ejercicio 001. Escribe la siguiente expresión como expresión en C++:

a)  a  
   --- +  1
    b
*/
#include <iostream>
using namespace std;

int main(){
    double a=0, b=0,c=0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"\nIngrese el valor de b: ";
    cin>>b;

    c = (a/b) + 1;

    cout.precision(2);//Para solo ver 2 decimales
    cout<<"\nEl resultado de la operacion es: "<<c<<endl;

    return 0;
}
