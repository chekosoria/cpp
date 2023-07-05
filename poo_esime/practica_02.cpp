/*
Realice un programa en que por medio de una struct pida el nombre de una persona hasta 30 letras, pida la edad en enteros 
y pida el numero telefonico e imprima estos datos.
*/
#include <iostream>
using namespace std;

struct agenda{
    char nombre[30];
    int edad=0;
    char telefono[15];
};

int main(){

    agenda a;

    cout<<"\tAgenda"<<endl;
    cout<<"Ingrese nombre: ";
    cin.getline(a.nombre,30,'\n');
    cout<<"\nIngrese edad: ";
    cin>>a.edad;
    cin.ignore();
    cout<<"\nIngrese telefono: ";
    cin.getline(a.telefono,15,'\n');
    cout<<"\n---------------------------"<<endl;
    cout<<"\tDatos capturados"<<endl;
    cout<<"Nombre: "<<a.nombre<<endl;
    cout<<"Edad: "<<a.edad<<endl;
    cout<<"Telefono: "<<a.telefono<<endl;

    return 0;
}

