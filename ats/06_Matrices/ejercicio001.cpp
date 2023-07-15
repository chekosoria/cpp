/*
Ejercicio 1. Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, posteriormente
mostrar la matriz en la pantalla.
*/
#include<iostream>
using namespace std;

int main(){
    int filas = 0, columnas = 0;

    cout<<"Ingrese el numero de filas de la matriz: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas de la matriz: ";
    cin>>columnas;

    int matrizA[filas][columnas];

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"Ingrese el valor de matrizA:["<<i<<"]["<<j<<"] : ";
            cin>>matrizA[i][j];
        }
    }

    cout<<"Los valores del arreglo son:"<<endl;

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"matrizA:["<<i<<"]["<<j<<"] : "<<matrizA[i][j]<<" ";
        }
        cout<<"\n";
    }  

    return 0;
}