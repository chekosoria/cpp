#include<iostream>
using namespace std;

int main(){
    int i, j, aux, min, x;

    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>x;

    int miArreglo[x];

    for(i = 0 ; i < x ; i++){
        cout<<"Ingrese numero: ";
        cin>>miArreglo[i];
    }

    for(i = 0; i < x; i++){
        min = i;
        for(j = (i+1); j < x; j++){
            if(miArreglo[j] < miArreglo[min]){
                min = j;
            }
        }
        aux = miArreglo[i];
        miArreglo[i] = miArreglo[min];
        miArreglo[min] = aux;
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