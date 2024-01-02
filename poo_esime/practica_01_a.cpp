/*
Realice un programa que por medio de una función pida 2 enteros, los sume y regrese el resultado a la llamada de la función.
*/
#include <iostream>
#include "Operaciones.h"

int main(){
    int x=15;
    int y = 20;

    int resultado = suma(x,y);

    std::cout <<"\nEl resultado de la suma es: " << resultado << std::endl;

    return 0;
}