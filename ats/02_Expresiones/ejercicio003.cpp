/*
Ejercicio 003. Escribe la siguiente expresión como expresión en C++:

a)       b 
    a + ---
         c
   --------
         e
    d + ---
         f
*/
#include <iostream>
using namespace std;

int main(){
     double a=0, b=0, c=0, d=0, e=0, f=0, x=0;

     cout<<"Ingrese el valor de a: ";
     cin>>a;
     cout<<"Ingrese el valor de b: ";
     cin>>b;
     cout<<"Ingrese el valor de c: ";
     cin>>c;
     cout<<"Ingrese el valor de d: ";
     cin>>d;
     cout<<"Ingrese el valor de e: ";
     cin>>e;
     cout<<"Ingrese el valor de f: ";
     cin>>f;

     x = (a + (b/c)) / (d + (e/f));

     cout<<"\nEl resultado de la expresión es:"<<x<<endl;

     return 0;
}