/*
Ejercicio 7. Desarrollar un programa que determine si una matriz es simétrica o no, una matriz es simétrica si es cuadrada y si es
igual a su matriz transpuesta
*/
#include<iostream>
using namespace std;

int main(){
    int filas = 0, columnas = 0;
    bool bandera = false;

    cout<<"Ingrese el numero de filas de la matriz: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas de la matriz: ";
    cin>>columnas;

    int matrizA[filas][columnas];

    cout<<"\nCapturando matriz"<<endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"Ingrese valor de matrizA["<<i<<"]["<<j<<"] = ";
            cin>>matrizA[i][j];
        }
    }
    if(filas == columnas){
        bandera = true;
        for(int i = 0; i < filas; i++){
            for(int j = 0; j < columnas; j++){
                if(matrizA[i][j] != matrizA[j][i]){
                    bandera = false;
                    break;
                }
            }
            if(!bandera){
                break;
            }
        }
    }

    if(bandera){
        cout<<"\nLa matriz es simetrica"<<endl;
    }
    else{
        cout<<"\nUna matriz solo puede ser simetrica SI es cuadrada e igual a su matriz transpuesta"<<endl;
    }


    return 0;
}