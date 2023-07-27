#include<iostream>
using namespace std;

int main(){
    int i, j, aux, x;

    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>x;

    int miArreglo[x];

    for(i = 0 ; i < x ; i++){
        cout<<"Ingrese numero: ";
        cin>>miArreglo[i];
    }

    cout<<"\nImprimiendo el arreglo original..."<<endl;
    for(i = 0; i < x; i++){
        cout<<"miArreglo:["<<i<<"] = "<<miArreglo[i]<<endl;
    }

    for(i = 0; i < x; i++){
        for(j = 0; j < (x-1); j++){
            if (miArreglo[j] > miArreglo[j+1]){
                aux = miArreglo[j];
                miArreglo[j] = miArreglo[j+1];
                miArreglo[j+1] = aux;
            }
        }
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