/*
Ejercicio 3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas sin iguales, en caso de no
serlo, indicar cual es mayor alfabeticamente.
*/
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cadena1[50];
    char cadena2[50];

    cout<<"Ingrese primer cadena: ";
    cin.getline(cadena1,50,'\n');
    cout<<"Ingrese segunda cadena: ";
    cin.getline(cadena2,50,'\n');

    if(strcmp(cadena1,cadena2) == 0){
        cout<<"\nLas cadenas son iguales"<<endl;
    }
    else if(strcmp(cadena1,cadena2) < 0){
        cout<<"\n"<<cadena1<<" esta primero alfabeticamente"<<endl;
    }
    else{
        cout<<"\n"<<cadena2<<" esta primero alfabeticamente"<<endl;
    }

    return 0;
}