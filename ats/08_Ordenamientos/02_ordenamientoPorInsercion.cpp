#include<iostream>
using namespace std;

int main(){
    int i, pos, aux, x;

    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>x;

    int miArreglo[x];

    for(i = 0; i < x; i++){
        cout<<"Ingrese numero: ";
        cin>>miArreglo[i];
    }

    for(i = 0; i < x; i++){
        pos = i;
        aux = miArreglo[i];

        while ((pos > 0) && (miArreglo[pos-1] > aux))
        {
            miArreglo[pos] = miArreglo[pos-1];
            pos--;
        }
        miArreglo[pos] = aux;
    }

    cout<<"\nImprimiendo el arreglo en orden ascendente..."<<endl;
    for(i = 0; i < x; i++){
        cout<<"miArreglo:["<<i<<"] = "<<miArreglo[i]<<endl;
    }

    cout<<"\nImprimiendo el arreglo en orden descendente..."<<endl;
    for(i = x-1; i >= 0; i--){
        cout<<"miArreglo:["<<i<<"] = "<<miArreglo[i]<<endl;
    }
    
    return 0;
}