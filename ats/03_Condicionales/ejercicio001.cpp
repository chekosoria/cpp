/*
Ejercicio 001. Escriba un programa que lea dos números y derermine cuál de ellos es el mayor. 
*/
#include <iostream>
using namespace std;

int main(){
    double a = 0, b = 0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;

    if(a > b){
        cout<<"El numero " << a << " es mayor que " << b << endl;
    }
    else if(a == b){
        cout<<"El numero " << a << " es igual que " << b << endl;
    }
    else{
        cout<<"El numero " << a << " es menor que " << b << endl;
    }

    return 0;
}