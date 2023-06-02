/*
Ejercicio 006. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los los cuatro alumnos.
*/
#include <iostream>
using namespace std;

int main(){
    double a=0, b=0, c=0, d=0, x=0;

    cout<<"Ingrese la calificación final del primer alumno: ";
    cin>>a;
    cout<<"Ingrese la calificación final del segundo alumno: ";
    cin>>b;
    cout<<"Ingrese la calificación final del tercer alumno: ";
    cin>>c;
    cout<<"Ingrese la calificación final del cuarto alumno: ";
    cin>>d;

    x = (a+b+c+d) / 4;

    cout<<"\nLa media de las calificaciones es: "<<x<<endl;
    
    return 0;
}