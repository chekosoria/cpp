/*
Ejercicio 8. Escriba una función nombrada cambio() que tenga un parámetro en numero entero y seis parámetros de referencia en número entero nombrados cien, cincuenta
veinte, diez, cinco y uno, respectivamente.
La función tiene que considerar el valor entero transmitido como una cantidad en dólares y convertir el valor en el número menos de billetes equivalente.
*/
#include<iostream>
using namespace std;

void cambio(int&,int&,int&,int&,int&,int&,int&);

int main(){
    int cantidad, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;

    cout << "----------------------------------------"<<endl;
    cout << "-------------- BIENVENIDO --------------"<<endl;
    cout << "----------------------------------------"<<endl;
    cout << "Ingrese el monto que quiere convertir: " ;
    cin >> cantidad;

    cambio(cantidad, cien, cincuenta, veinte, diez, cinco, uno);

    return 0;
}

void cambio(int& t,int& u,int& v,int& w,int& x,int& y,int& z){
    u = t / 100;
    v = t / 50;
    w = t / 20;
    x = t / 10;
    y = t / 5;
    z = t;

    cout << "Los $"<< t << " ingresados corresponden a " << u << " billetes de $100" << endl;
    cout << "Los $"<< t << " ingresados corresponden a " << v << " billetes de $50" << endl;
    cout << "Los $"<< t << " ingresados corresponden a " << w << " billetes de $20" << endl;
    cout << "Los $"<< t << " ingresados corresponden a " << x << " billetes de $10" << endl;
    cout << "Los $"<< t << " ingresados corresponden a " << y << " billetes de $5" << endl;
    cout << "Los $"<< t << " ingresados corresponden a " << z << " billetes de $1" << endl;
};
