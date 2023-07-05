/*
Realice un programa que por medio de un puntero a una struct realice lo siguiente:
1)	Pida el nombre de una persona hasta 30 letras
2)	Pida la edad en enteros 
3)	Pida el número telefónico
4)  Imprima los datos
             **Tiene que pedir e imprimir los elementos de la estructura con el operador ->
*/
#include <iostream>
using namespace std;

struct agenda{
    char nombre[30];
    int edad=0;
    char telefono[15];
};

int main(){

    agenda* a = new agenda;

    cout<<"\tAgenda"<<endl;
    cout<<"Ingrese nombre: ";
    cin.getline(a->nombre,30,'\n');
    cout<<"\nIngrese edad: ";
    cin>>a->edad;
    cin.ignore();
    cout<<"\nIngrese telefono: ";
    cin.getline(a->telefono,15,'\n');
    cout<<"\n---------------------------"<<endl;
    cout<<"\tDatos capturados"<<endl;
    cout<<"Nombre: "<<a->nombre<<endl;
    cout<<"Edad: "<<a->edad<<endl;
    cout<<"Telefono: "<<a->telefono<<endl;

    delete a;

    return 0;
}

