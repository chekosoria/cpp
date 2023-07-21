/*
Ejercicio 4. Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle al usuario su nombre
y por último añadir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola que tal (nombre del usuario)"
*/
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char cadena1[] = "Hola que tal ";
    char cadena2[30];

    cout<<"Ingrese su nombre: ";
    cin.getline(cadena2,30,'\n');

    strcat(cadena1,cadena2);

    cout<<"\n"<<cadena1<<endl;

    return 0;
}