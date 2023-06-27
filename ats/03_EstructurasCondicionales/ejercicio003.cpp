/*
Ejercicio 3. Realice un programa que lea un valor entero y determine si se trata de un numero par o impar.
*/
#include <iostream>
using namespace std;

int main(){
    int a = 0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;

    if(a == 0){
        cout<<"El numero ingresado es cero"<<endl;
    }
    else if(a % 2 == 0){
        cout<< a << " es un numero par"<<endl;
    }
    else{
        cout<< a << " no es un numero par"<<endl;

    }
    return 0;
}