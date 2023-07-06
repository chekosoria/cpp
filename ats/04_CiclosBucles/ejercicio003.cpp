/*
Ejercicio 3. Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10 primeros enteros mayores
que cero
*/
#include<iostream>

using namespace std;

int main(){
    int suma=0, i=0;

    while (i<=10)
    {
        suma += (i*i);
        i++;
    }

    cout<<"La suma de los cuadrados de los enteros entre 0-10 es: "<<suma<<endl;
    
    return 0;
}