#include<iostream>
using namespace std;

int main(){
    int dato, mitad, primero, ultimo;
    int miArreglo[] = {1,2,3,4,5,6,7,8,9,10};
    bool bandera = false;

    cout<<"Ingrese el numero a buscar: ";
    cin>>dato;

    primero = 0;
    ultimo = 9;
    while (primero <= ultimo)
    {
        mitad = (primero + ultimo) / 2;
        if(dato == miArreglo[mitad]){
            bandera = true;
            break;
        }
        if(dato < miArreglo[mitad]){
            ultimo = mitad - 1;
        }
        if(dato > miArreglo[mitad]){
            primero = mitad + 1;
        }
    }

    if(bandera){
        cout<<"\nEl numero "<<dato<<" ha sido encontrado en la pocision " <<mitad<< " del arreglo"<<endl;
    }
    else{
        cout<<"\nEl numero "<<dato<<" no se encuentra en el arreglo"<<endl;
    }

    return 0;
}