/*
Ejercicio 002. Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en 
la salida estándar el precio del prpoducto al aplicarle el IVA
*/
#include <iostream>

using namespace std;

int main(){
    double precioInicial = 0, iva=.16, precioFinal=0;

    cout<<"Ingrese el precio del producto: ";
    cin>>precioInicial;

    precioFinal = (precioInicial*iva) + precioInicial;

    cout<<"\nEl precio final del producto es: "<<precioFinal<<endl;

    return 0;
}