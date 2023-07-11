/*
Ejercicio 11. Escriba un programa que calcule el valor de 2^1, 2^2, 2^3 .... 2^n
*/
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int x = 0;
    unsigned long long total = 0, potencia = 0;

    cout<<"Ingrese el valor de X: ";
    cin>>x;

    if(x == 0){
        cout<<"\n 2^0 = 1"<<endl;
    }
    else if (x < 0){
        cout<<"\n 2^"<<x<<" = 1/2^"<<(x*-1)<<endl;
    }
    else{
        for(int i = 1; i <= x; i++){
        potencia = pow(2,i);
        total += potencia;
    }
    }
    cout<<"\nEl total de sumar desde 2^1 hasta 2^"<<x<<" es: "<<total<<endl;

    return 0;
}