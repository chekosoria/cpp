/*
Ejercicio 9. Escriba una función llamada tiempo() que tenga un parámetro en número entero llamado totalSeg y tres parámetros de referencia enteros nombrados
horas, min y seg. La función es convertir el número de segundos transmitido en un número equivalente de horas, minutos y segundos.
*/
#include<iostream>
using namespace std;

void tiempo(int&,int&,int&,int&);

int main(){
    int dias, horas=0, minutos=0, segundos=0;

    cout << "----------------------------------------"<<endl;
    cout << "-------------- BIENVENIDO --------------"<<endl;
    cout << "----------------------------------------"<<endl;
    cout << "Ingrese el monto que quiere convertir: " ;
    cin >> dias;

    tiempo(dias, horas, minutos, segundos);

    return 0;
}

void tiempo(int& w,int& x,int& y,int& z){
    
    cout << "\nUsted ingreso " << w << " dias para ser convertidos en horas, minutos y segundos" << endl;
    
    x = w * 24;
    y = w * 1440;
    z = w * 86400;

    cout << "Los " << w << " dias ingresados corresponden a " << x << " horas" << endl;
    cout << "Los " << w << " dias ingresados corresponden a " << y << " minutos" << endl;
    cout << "Los " << w << " dias ingresados corresponden a " << z << " segundos" << endl;
};
