/*
Ejercicio 4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. Es
decir, debe de leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura más alta y la más baja
*/
#include<iostream>

using namespace std;

int main(){
    float temperaturaActual=0, total=0, promedio=0, temperaturaMenor = 999, temperaturaMayor = 0;

    for(int i = 0; i < 24; i+=4){
        cout<<"Ingrese la temperatura de las "<<i<<":00 horas : ";
        cin>>temperaturaActual;

        total += temperaturaActual;

        if(temperaturaActual > temperaturaMayor){
            temperaturaMayor = temperaturaActual;
        }
        if(temperaturaActual < temperaturaMenor){
            temperaturaMenor = temperaturaActual;
        }

    }

    promedio = total/6;

    cout<<"La media de temperatura de hoy es: "<<promedio<<" grados"<<endl;
    cout<<"La temperatura menor de hoy fue: "<<temperaturaMenor<<" grados"<<endl;
    cout<<"La temperatura mayor de hoy fue: "<<temperaturaMayor<<" grados"<<endl;

    return 0;
}