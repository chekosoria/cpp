/*
Ejercicio 14. Realiza una función que tome como parámetros un vector de enteros y su tamaño e imprima un vector con los elementos impares del vector recibido
*/
#include<iostream>

using namespace std;

void mostrar(int vec[],int);

void impar(int vec[],int);

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


    cout << "Mostrando los elementos impares" << endl;

    impar(vec,x);

    return 0;
}

void mostrar(int vec[],int a){
    for(int k = 0; k < a; k++){
        cout << "El valor de vec[" << k << "] es: " << vec[k] << endl;
    }
};

void impar(int vec[],int a){
    for(int j = 0; j < a; j++){
        if(vec[j] % 2 != 0){
            cout << "vec[" << j << "]:" << vec[j] << " es impar" << endl;
        }
    }
};
