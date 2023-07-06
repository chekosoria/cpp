/*
Ejercicio 2. Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento el programa
debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
*/
#include<iostream>

using namespace std;

int main(){
    int i=0, numero=0;

    do
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;

        if(numero >= 1){
            i++;
        }
    } while (numero != 0);

    cout<<"\nEl total de numeros mayores que cero ingresados es: "<<i<<endl;
    
    return 0;
}