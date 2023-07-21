/*
Ejercicio 7. Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A convertir su nombre a minusculas, 
caso contrario no convertirlo
*/
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char nombre[30];

    cout<<"Ingrese nombre en MAYUSCULAS: ";
    cin.getline(nombre,30,'\n');

    if(nombre[0] == 'A'){
        strlwr(nombre);
        cout<<"\nEl nombre ingresado en minusculas es: "<<nombre<<endl;
    }
    else{
        cout<<"\nEl nombre ingresado es: "<<nombre<<endl;
    }
    
    return 0;
}