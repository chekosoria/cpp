/*
Ejercicio 14. En una clase 5 alumnos han realizado tres exámenes y se requiere determinar el número de:
a) Alumnos que aprobaron todos los exámenes
b) Alumnos que aprobaron al menos un examen
c) Alumnos que aprobaron únicamente el último examen
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.
*/
#include<iostream>
using namespace std;

int main(){
    double e1 = 0, e2 = 0, e3 = 0; 
    int a = 0, b = 0, d = 0;

    for(int i = 1; i <= 5; i++){
        cout<<"----- Alumno "<<i<<" -----"<<endl;
        cout<<"Ingrese la calificacion del 1er examen: ";
        cin>>e1;
        cout<<"Ingrese la calificacion del 2do examen: ";
        cin>>e2;
        cout<<"Ingrese la calificacion del 3er examen: ";
        cin>>e3;

        if((e1 > 5.9) && (e2 > 5.9) && (e3 > 5.9)){
            a++;
        }
        if((e1 > 5.9) || (e2 > 5.9) || (e3 > 5.9)){
            b++;
        }
        if((e1 < 6.0) && (e2 < 6.0) && (e3 > 5.9)){
            d++;
        }
    }
    cout<<"\nAlumnos que aprobaron todos los examenes: "<<a<<endl;
    cout<<"Alumnos que aprobaron al menos un examen: "<<b<<endl;
    cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<d<<endl;

    return 0;
}