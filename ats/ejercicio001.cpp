/*
Ejercicio 001. Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar su suma, resta, 
multiplicación y división
*/

#include <iostream>

using namespace std;

int main(){
    double x=0, y=0, suma=0, resta=0, multiplicacion=0, division=0;

    cout<<"Ingrese el primer numero: ";
    cin>>x;
    cout<<"\nIngrese el segundo numero: ";
    cin>>y;


    suma = x+y;
    resta = x-y;
    multiplicacion = x*y;
    division = x/y;

    cout<<"\nEl resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;

    return 0;
}