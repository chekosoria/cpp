/*
Ejercicio 4. Hacer una matriz de tipo entera preguntando al usuario el número de filas y columnas, llenarla de númeroa aleatorios, copiar
el contenido a otra matriz y por último mostrarla en pantalla
*/
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int filas = 0, columnas = 0;

    cout<<"Ingrese el numero de filas de la matriz: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas de la matriz: ";
    cin>>columnas;

    int matrizA[filas][columnas];
    int matrizB[filas][columnas];

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            int randomNum = rand(); 
            matrizA[i][j] = randomNum;
        }
    }
    cout<<"\nImprimiendo la matriz original"<<endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"matrizA["<<i<<"]["<<j<<"] = "<<matrizA[i][j]<<" | ";
        }
        cout<<"\n";
    }
    cout<<"\nCopiando elementos de la matriz original a la matriz destino"<<endl;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            matrizB[i][j] = matrizA[i][j];
        }
    }
    cout<<"\nMostrando la matriz destino con sus nuevos valores"<<endl;
    for(int i = 0; i <filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"matrizB["<<i<<"]["<<j<<"] = "<<matrizB[i][j]<<" | ";
        }
        cout<<"\n";
    }

    return 0;
}