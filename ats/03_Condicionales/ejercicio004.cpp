/*
Ejercicio 4. Realice un programa que lea un valor entero y determine si se trata de un numero positivo o negativo.
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
    else if(a > 0){
        cout<< a << " es un numero positivo"<<endl;
    }
    else{
        cout<< a << " es un numero negativo"<<endl;

    }
    return 0;
}