/*
Ejercicio 2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz
*/
#include<iostream>
using namespace std;

int main(){
    int matrizA[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Ingrese valor de matrizA["<<i<<"]["<<j<<"] = ";
            cin>>matrizA[i][j];
        }
    }
    cout<<"\nLa matriz completa es: "<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"matrizA:["<<i<<"]["<<j<<"] : "<<matrizA[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nLa diagonal principal de la matriz es: "<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                cout<<"matrizA:["<<i<<"]["<<j<<"] : "<<matrizA[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}