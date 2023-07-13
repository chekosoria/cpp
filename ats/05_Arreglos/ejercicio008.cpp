/*
Ejercicio 8. Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.
*/
#include<iostream>
using namespace std;

int main(){
    int x = 0;
    cout<<"Ingrese cantidad de elementos en los arreglos: ";
    cin>>x;
    int inicial[x];
    int multiplicado[x];

    for(int i = 0; i < x; i++){
        cout<<"Ingrese numero: ";
        cin>>inicial[i];
        multiplicado[i] = inicial[i]*2;
    }
    for(int i = 0; i < x; i++){
        cout<<"multiplicado:["<<i<<"] = "<<multiplicado[i]<<endl;
    }

    return 0;
}