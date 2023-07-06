/*
Ejercicio 7. Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango
[18-25].
*/
#include <iostream>
using namespace std;

int main(){
    int edad = 0;

    cout<<"Ingrese edad: ";
    cin>>edad;

    if(edad >= 18 && edad <= 25){
        cout<<"La edad esta dentro del rango"<<endl;
    }
    else{
        cout<<"La edad no esta dentro del rango"<<endl;
    }
    
    return 0;
}