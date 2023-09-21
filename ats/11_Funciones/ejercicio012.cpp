/*
Ejercicio 12. Realice una función que tome como parámetros un vector y su tamaño y diga si el vector está ordenado crecientemente. 
*/
#include<iostream>
using namespace std;

void revisar(int vec[],int,bool&);

int main(){
    int x;
    bool ordenado = false;

    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> x;

    int vec[x];

    for(int i = 0; i < x; i++){
        cout << "Ingrese valor: ";
        cin >> vec[i];
    }

    revisar(vec,x,ordenado);

    if(ordenado){
        cout << "\nEl vector esta ordenado crecientemente" << endl;
    }
    else{
        cout << "\nEl vector NO esta ordenado crecientemente" << endl;
    }

    return 0;
}

void revisar(int vec[],int a, bool& b){
    for(int j = 0; j < a - 1; j++){
        if(vec[j+1] >= vec[j]){
            b = true;
        }
        else{
            b = false;
            break;
        }
    }
};