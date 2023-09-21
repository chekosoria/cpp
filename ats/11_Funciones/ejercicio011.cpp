/*
Ejercicio 11. Realice una función que tome como parámetros un vector de números enteros y devuelva la suma de sus elementos.
*/
#include<iostream>
using namespace std;

void suma(int vec[],int,int&);

int main(){
    int x,total=0;

    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> x;

    int vec[x];

    for(int i = 0; i < x; i++){
        cout << "Ingrese valor: ";
        cin >> vec[i];
    }

    suma(vec,x,total);

    cout << "\nLa suma del los elementos del vector es: " << total << endl;

    return 0;
}

void suma(int vec[],int a, int& b){
    for(int j = 0; j < a; j++){
        b += vec[j];
    }
};