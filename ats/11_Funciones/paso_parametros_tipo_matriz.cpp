#include<iostream>
#include<math.h>

using namespace std;

void mostrar(int m[3][3],int,int);

void cuadrado(int m[3][3],int,int);

int main(){
    const int filas = 3;
    const int columnas = 3;
    int m[filas][columnas];

    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"Ingrese valor: ";
            cin>>m[i][j];
            cout<<endl;
        }
    }

    cout<<"Matriz original"<<endl;

    mostrar(m,filas,columnas);

    cout<<"Matriz al cuadrado"<<endl;

    cuadrado(m,filas,columnas);

    return 0;
}

void mostrar(int m[3][3],int filas,int columnas){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"m:["<<i<<"]""["<<j<<"]:"<<m[i][j]<<" ";
        }
        cout<<endl;
    }
};

void cuadrado(int m[3][3],int filas,int columnas){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"m:["<<i<<"]""["<<j<<"]:"<<pow(m[i][j],2)<<" ";
        }
        cout<<endl;
    }
};