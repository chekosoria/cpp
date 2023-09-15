/*
Ejercicio 4. Escriba un programa que devuelva la parte fraccionaria de cualquier número introducido por el usuario.
*/
#include<iostream>
using namespace std;

void separar(double a);

void ingresar();

double x;

int main(){

    ingresar();

    separar(x);
    
    return 0;
}

void separar(double a){
    int b = a;
    double resto;
    resto = a - b;

    cout << "La parte decimal del numero ingresado es: " << resto << endl;
};

void ingresar(){
    cout << "\nIngrese numero a separar: ";
    cin >> x;
}