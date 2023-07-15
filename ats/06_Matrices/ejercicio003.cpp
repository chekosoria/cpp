/*
Ejercicio 3. Hacer una matriz de tipo entera de 2x2, llenarla de números y luego copiar todo su contenido hacia otra matriz
*/
#include<iostream>
using namespace std;

int main(){
    int matrizA[2][2];
    int matrizB[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<"Ingrese valor de matrizA["<<i<<"]["<<j<<"] = ";
            cin>>matrizA[i][j];
        }
    }
    cout<<"\nImprimiendo la matriz original"<<endl;
    for(int i = 0; i <2; i++){
        for(int j = 0; j < 2; j++){
            cout<<"matrizA["<<i<<"]["<<j<<"] = "<<matrizA[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Copiando elementos de la matriz original a la matriz destino"<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrizB[i][j] = matrizA[i][j];
        }
    }
    cout<<"Mostrando la matriz destino con sus nuevos valores"<<endl;
    for(int i = 0; i <2; i++){
        for(int j = 0; j < 2; j++){
            cout<<"matrizB["<<i<<"]["<<j<<"] = "<<matrizB[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}