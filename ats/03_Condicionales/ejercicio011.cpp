/*
Ejercicio 11. Hacer un programa que simule un cajero automático con un saldo inicial de $1000.00
*/
#include <iostream>
using namespace std;

int main(){
    int opcion = 0;
    double saldo = 1000, retiro = 0, deposito = 0;

    cout<<"*******************************************************"<<endl;
    cout<<"***                    BIENVENIDO                   ***"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<"*                                                     *"<<endl;
    cout<<"* Saldo ........................................... 1 *"<<endl;
    cout<<"* Deposito ........................................ 2 *"<<endl;
    cout<<"* Retiro .......................................... 3 *"<<endl;
    cout<<"* Salir ........................................... 0 *"<<endl;
    cout<<"*                                                     *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<"* Opcion: ";
    cin>>opcion;

    switch(opcion){
        case 0:
        cout<<"Adios, no olvide su tarjeta...."<<endl;
        break;

        case 1:
        cout<<"\nSu saldo es: $"<<saldo<<endl;
        break;

        case 2:
        cout<<"\nIngrese el monto a depositar: $";
        cin>>deposito;

        saldo += deposito;

        cout<<"\nSu nuevo saldo es: $" << saldo << endl;
        break;

        case 3:
        cout<<"\nIngrese el monto a retirar: $";
        cin>>retiro;

        if(retiro <= saldo){
            saldo -= retiro;
            cout<<"\nSu nuevo saldo es: $" << saldo << endl;
        }
        else{
            cout<<"\nNo cuenta con saldo suficiente" << endl;
        }
        break;

        default:
        cout<<"Opcion no valida"<<endl;
    }
    return 0;
}