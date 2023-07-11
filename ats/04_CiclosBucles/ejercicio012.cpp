/*
Ejercicio 12. Hacer un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6.....n
*/
#include<iostream>
using namespace std;

int main(){
    int x = 0, total = 0;

    cout<<"Ingrese el valor de X: ";
    cin>>x;

    if(x % 2 != 0){
        x = x-1;
    }

    for(int cont = 1; cont <= x; cont ++){
        int t1, t2;

        for(int i = 1; i <= x; i += 2){
            t1 = i;
        }
        for(int j = 2; j <= x; j +=2){
            t2 = j;
        }
        total += (t2 - t1);
    }

    cout<<"\nEl resultado de la serie es: "<<total<<endl;

    return 0;
}