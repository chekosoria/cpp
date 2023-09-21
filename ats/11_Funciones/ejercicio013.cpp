/*
Ejercicio 13. Realiza una función que tome como parámetros un vector de números y su tamaño y cambie el sigo de los elementos del vector
*/
#include<iostream>
using namespace std;

void cambiar(int vec[],int);

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

    cout << "Mostrando los valores capturados" << endl;

    mostrar(vec,x);

    cambiar(vec,x);

    cout << "Mostrando los valores con el signo contrario" << endl;

    mostrar(vec,x);

    return 0;
}

void cambiar(int vec[],int a){
    for(int j = 0; j < a; j++){
        vec[j] *= -1;
    }
};

void mostrar(int vec[],int a){
    for(int k = 0; k < a; k++){
        cout << "El valor de vec[" << k << "] es: " << vec[k] << endl;
    }
};