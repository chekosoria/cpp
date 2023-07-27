/*
Ejercicio 1. Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos:
- Nombre
- Edad
- Sexo
- Club
- *** Categoría
Pedir datos al usuario para un corredor y asignar una categoría de competición:
- Juvenil <= 18
- Senior <= 40
- Veterano > 40
Posteriormente imprimir los datos del corredor, incluida su categoría de competición
*/
#include<iostream>
#include<string.h>
using namespace std;

struct corredor
{
    char nombre[30];
    int edad;
    char sexo[10];
    char club[30];
    char categoria[10];
};

int main(){

    struct corredor corredores[3];

    for(int i = 0; i < 3; i++){
        cout<<"\nCapturando datos del corredor "<<i+1<<endl;
        cout<<"\nIngrese nombre: ";
        cin.getline(corredores[i].nombre,30,'\n');
        cout<<"Ingrese edad: ";
        cin>>corredores[i].edad;
        cin.ignore();
        cout<<"Ingrese sexo: ";
        cin.getline(corredores[i].sexo,10,'\n');
        cout<<"Ingrese club: ";
        cin.getline(corredores[i].club,30,'\n');

        if(corredores[i].edad <= 18){
            strcpy(corredores[i].categoria,"Juvenil");
        }
        else if((corredores[i].edad > 18) && (corredores[i].edad <= 40)){
            strcpy(corredores[i].categoria,"Senior");
        }
        else{
            strcpy(corredores[i].categoria,"Veterano");
        }
        cout<<"\n------------------------------------"<<endl;
    }

    for(int i = 0; i < 3; i++){
        cout<<"\nDatos del corredor "<<i+1<<endl;
        cout<<"Nombre:    "<<corredores[i].nombre<<endl;
        cout<<"Edad:      "<<corredores[i].edad<<endl;
        cout<<"Sexo:      "<<corredores[i].sexo<<endl;
        cout<<"Club:      "<<corredores[i].club<<endl;
        cout<<"Categoria: "<<corredores[i].categoria<<endl;
        cout<<"\n------------------------------------"<<endl;
    }

    return 0;
}