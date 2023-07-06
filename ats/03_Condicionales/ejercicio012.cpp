/*
Ejercicio 12. Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un número
Caso 2: Número par o impar
Caso 3: Salir
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int opcion = 0, numero = 0, cubo = 0;

    cout<<"*******************************************************"<<endl;
    cout<<"***                    BIENVENIDO                   ***"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<"*                                                     *"<<endl;
    cout<<"* Cubo del numero ................................. 1 *"<<endl;
    cout<<"* Par o impar? .................................... 2 *"<<endl;
    cout<<"* Salir ........................................... 3 *"<<endl;
    cout<<"*                                                     *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<"* Opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1:

        cout<<"\nIngrese un numero: ";
        cin>>numero;

        cubo = pow(numero,3);

        cout<<"El cubo del numero ingresado es: " << cubo << endl;
        break;

        case 2:

        cout<<"\nIngrese un numero: ";
        cin>>numero;

        if(numero % 2 == 0){
            cout<<"\nEl numero ingresado es par"<< endl;
        }
        else{
            cout<<"El numero ingresado es impar"<< endl;
        }
        break;

        case 3:
        cout<<"\nAdios"<<endl;
        break;

        default:
        cout<<"\nOpcion no soportada"<<endl;
        break;
    }

    return 0;
}