/*
Ejercicio 5. Relice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella que la
columna i era la fila i de la matriz original

| 1 | 2 | 3 |      | 1 | 4 | 7 |
| 4 | 5 | 6 | -->  | 2 | 5 | 8 |
| 7 | 8 | 9 |      | 3 | 6 | 9 |
*/
#include<iostream>
using namespace std;

int main(){
    int matrizA[3][3];
    int matrizB[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Ingrese valor de matrizA["<<i<<"]["<<j<<"] = ";
            cin>>matrizA[i][j];
        }
    }
    cout<<"\nGuardando matriz traspuesta"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrizB[i][j] = matrizA[j][i];
        }
    }
    cout<<"Matriz original"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"| "<<matrizA[i][j]<<" | ";
        }
        cout<<"\n";
    }
    cout<<"Matriz traspuesta"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<"| "<<matrizB[i][j]<<" | ";
        }
        cout<<"\n";
    }
    return 0;
}