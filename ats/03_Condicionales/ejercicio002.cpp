/*
Ejercicio 002. Escriba un programa que lea tres números y derermine cuál de ellos es el mayor. 
*/
#include <iostream>
using namespace std;

int main(){
    double a = 0, b = 0, c = 0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;
    cout<<"Ingrese el valor de c: ";
    cin>>c;

    if(a > b && a > c){
        cout<< a << " es el numero mayor de los tres" << endl;
    }
    else if(b > a && b > c){
        cout<< b << " es el numero mayor de los tres" << endl;
    }
    else if(b == a && b == c){
        cout<< "Los tres numeros son iguales" << endl;
    }
    else{
        cout<< c << " es el numero mayor de los tres" << endl;
    }

    return 0;
}