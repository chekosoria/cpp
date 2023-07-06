/*
Ejercicio 5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango 20-30 o se intruduzca el valor 0. El 
programa debe entregar la suma de los valores mayores a 0 introducidos
*/
#include<iostream>

using namespace std;

int main(){
    int num=0, total=0;
    
    do
    {

        cout<<"Ingrese un numero: ";
        cin>>num;

        if(num >= 20 && num <= 30){
            total += num;
        }
        else{
            total += 0;
        }

    } while (num != 0);

    cout<<"La suma total de los enteros ingresados fuera del rango 20-30 es: "<<total<<endl;
    
    return 0;
}