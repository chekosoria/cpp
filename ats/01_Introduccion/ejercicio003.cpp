/*
Ejercicio 003. Realice un programa que lea de la entrada estándar los siguientes datos de una persona:

Edad: dato de tipo entero.
Sexo: dato de tipo carácter.
Altura en metros: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estándar
*/
#include <iostream>
using namespace std;

int main(){
    int edad =0;
    char sexo[10];
    double altura=0;

    cout<<"Ingrese edad: ";
    cin>>edad;
    cout<<"\nIngrese el sexo: ";
    cin>>sexo;
    cout<<"\nIngrese la altura: ";
    cin>>altura;

    cout<<"\nLa edad de la persona es: "<<edad<<endl;
    cout<<"El sexo de la persona es: "<<sexo<<endl;
    cout<<"La altura de la persona es: "<<altura<<endl;
    
    return 0;
}