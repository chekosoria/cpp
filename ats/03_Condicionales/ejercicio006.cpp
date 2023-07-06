/*
Ejercicio 6. Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal
minuscula, es una vocal mayuscula o no es una vocal.
*/
#include <iostream>
using namespace std;

int main(){
    char letra;

    cout<<"Ingrese una letra: ";
    cin>>letra;

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        cout<<"La letra ingresada es minuscula"<<endl;
    }
    else if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        cout<<"La letra ingresada es mayuscula"<<endl;
    }
    else{
        cout<<"No es una vocal"<<endl;
    }


    return 0;
}