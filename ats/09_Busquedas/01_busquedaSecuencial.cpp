#include<iostream>
using namespace std;

int main(){
    int i, dato;
    int miArreglo[] = {9,23,33,13,91,25,7};
    bool bandera = false;

    cout<<"Ingrese numero a buscar: ";
    cin>>dato;

    i = 0;
    while ((!bandera) && (i < 7))
    {
        if(miArreglo[i] == dato){
            bandera = true;
            break;
        }
        i++;
    }

    if(bandera){
        cout<<"\nEl numero "<<dato<<" ha sido encontrado en la pocision " <<i<< " del arreglo"<<endl;
    }
    else{
        cout<<"\nEl numero "<<dato<<" no se encuentra en el arreglo"<<endl;
    }
    
    return 0;
}