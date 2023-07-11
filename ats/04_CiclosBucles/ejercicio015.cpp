/*
Ejercicio 15. Realice un programa que solicite al usuario que piense un número entero ente el 1 y el 100. El programa debe generar
un número aleatorio en ese mismo rango, e indicarle al usuario si el número que digitó es menor o mayor al número aleatorio, así 
hasta que lo adivine y por último mostrarle el número de intentos que le llevó.
*/
#include<iostream>
using namespace std;

int main(){
    int x = 0, y = 0, contador = 0;

    cout<<"Generando un numero al azar......"<<endl;
    y = 1 + rand() % (100);

    do
    {
        cout<<"Adivine el numero generado al azar: ";
        cin>>x;

        if(x < y){
            cout<<"El numero ingresado es menor al numero generado al azar"<<endl;
            contador++;
        }
        else if(x > y){
            cout<<"El numero ingresado es mayor al numero generado al azar"<<endl;
            contador++;
        }
        else{
            contador++;
        }
    } while (x != y);
    
    cout<<"\nFelicidades, logro adivinar el numero en "<<contador<<" intentos"<<endl;

    return 0;
}