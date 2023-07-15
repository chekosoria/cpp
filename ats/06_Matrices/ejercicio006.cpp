/*
Ejercicio 6. Relice un programa que calcule la suma de dos matrices cuadradas de 3x3
*/
#include<iostream>
using namespace std;

int main(){
    int matrizA[3][3];
    int matrizB[3][3];

    cout<<"\nCapturando matriz A"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Ingrese valor de matrizA["<<i<<"]["<<j<<"] = ";
            cin>>matrizA[i][j];
        }
    }
    cout<<"\nCapturando matriz B"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Ingrese valor de matrizB["<<i<<"]["<<j<<"] = ";
            cin>>matrizB[i][j];
        }
    }
    cout<<"Matriz A"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"| "<<matrizA[i][j]<<" | ";
        }
        cout<<"\n";
    }
    cout<<"Matriz B"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"| "<<matrizB[i][j]<<" | ";
        }
        cout<<"\n";
    }
    cout<<"Sumando matrices (A+B)"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"| "<<(matrizA[i][j] + matrizB[i][j])<<" | ";
        }
        cout<<"\n";
    }

    return 0;
}