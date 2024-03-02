#include<iostream>
using namespace std;

int main(){
    int opcion = 1;

while (opcion == 1)
{
    int numero = 0;
    int acumulado = 0;

    cout<<"\nIngrese un numero: ";
    cin>>numero;

    for(int i=1; i < numero; i++){
        if(numero%i == 0){
            acumulado += i;
            cout<<numero<<" es divisible entre "<<i<<endl;
            cout<<"La suma acumulada de los divisores de "<<numero<<" es "<<acumulado<<endl;
            }
        }
    
    if(acumulado == numero){
        cout<<"\nEl numero "<<numero<<" es un numero perfecto"<<endl;
    }
    else{
        cout<<"\nEl numero "<<numero<<" no es perfecto"<<endl;
    }

    fflush(stdin); 

        cout<<"\nIngrese 1 para revisar otro numero o 0 para salir: ";
    cin>>opcion;

switch (opcion)
{
case 1:
        cout<<"\n......"<<flush;
    break;
case 0:
        cout<<"\nAdios";
    break;
default:
        cout<<"\nOpcion no disponible"<<endl;
        cout<<"\nIngrese 1 para revisar otro numero o 0 para salir: ";
        cin>>opcion;
    break;
}


}

    return 0;
}