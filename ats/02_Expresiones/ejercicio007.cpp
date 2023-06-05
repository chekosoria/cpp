/*
Ejercicio 007. La calificación final de un estudiante es la media ponderada de tres notas:
- La nota de prácticas que cuenta con el 30% del total.
- La nota teórica que cuenta con un 60%.
- Y la nota de participación que cuenta con el 10%.
Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final
*/
#include <iostream>
using namespace std;

int main(){
    double practicas = 0, teoria = 0, participacion = 0, calificacion = 0;

    cout<<"Ingrese la calificacion de practicas: ";
    cin>>practicas;
    cout<<"Ingrese la calificacion de teoria: ";
    cin>>teoria;
    cout<<"Ingrese la calificacion de participacion: ";
    cin>>participacion;

    practicas *=.30;
    teoria *=.60;
    participacion *=.10;
    calificacion = practicas + teoria + participacion;

    cout.precision(2);
    cout<<"\nLa calificacion final es: "<<calificacion<<endl; 

    return 0;
}