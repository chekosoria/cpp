/*
Ejercicio 5. Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal
minuscula o no
*/
#include <iostream>
using namespace std;

int main(){
    char letra;

    cout<<"Ingrese una letra: ";
    cin>>letra;

    switch (letra)
    {
    case 'a':
        cout<<"La letra ingresada es minuscula"<<endl;
        break;
    case 'e':
        cout<<"La letra ingresada es minuscula"<<endl;
        break;
    case 'i':
        cout<<"La letra ingresada es minuscula"<<endl;
        break;
    case 'o':
        cout<<"La letra ingresada es minuscula"<<endl;
        break;
    case 'u':
        cout<<"La letra ingresada es minuscula"<<endl;
        break;
    default:
        cout<<"No es una vocal minuscula"<<endl;
        break;
    }

    return 0;
}