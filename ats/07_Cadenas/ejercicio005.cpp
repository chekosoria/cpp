/*
Ejercicio 5. Hacer un programa que determine si una palabra es políndroma
*/
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[30];
    char palabrarev[30];

    cout<<"Ingrese una palabra: ";
    cin.getline(palabra,30,'\n');

    strcpy(palabrarev,palabra);
    strrev(palabrarev);

    if(strcmp(palabra,palabrarev) == 0){
        cout<<"\nLa palabra es polindroma"<<endl;
    }
    else{
        cout<<"\nLa palabra no es polindroma"<<endl;
    }
    
    return 0;
}