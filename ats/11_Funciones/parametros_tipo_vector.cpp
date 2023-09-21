#include<iostream>
#include<math.h>
using namespace std;

void cuadrado(int vec[],int);

void mostrar(int vec[],int);

int main(){
    int x;

    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> x;

    int vec[x];

    for(int i = 0; i < x; i++){
        cout << "Ingrese valor: ";
        cin >> vec[i];
    }

    cuadrado(vec,x);

    mostrar(vec,x);

    return 0;
}

void cuadrado(int vec[],int a){
    for(int j = 0; j < a; j++){
        int aux = 0;
        aux = pow(vec[j],2);
        vec[j] = aux;
    }
};

void mostrar(int vec[], int a){
    for(int k = 0; k < a; k++){
        cout << "El cuadrado del elemento vec[" << k <<"] es: " << vec[k] << endl;
    }
};