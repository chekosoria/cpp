/*
Ejercicio 7. Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.
*/
#include<iostream>
using namespace std;

void intercambio(int&, int&);

int main(){
    int a,b;

    cout << "----------------------------------------"<<endl;
    cout << "-------------- BIENVENIDO --------------"<<endl;
    cout << "----------------------------------------"<<endl;
    cout << "Ingrese primer numero: " ;
    cin >> a;
    cout << "Ingrese segundo numero: " ;
    cin >> b;

    intercambio(a,b);

    return 0;
}

void intercambio(int& x, int& y){
    int z;

    cout << "\n----------------------------------------"<<endl;
    cout << "El valor del primer numero es: "<<x<<endl;
    cout << "El valor del segundo numero es: "<<y<<endl;
    z = x;
    x = y;
    y = z;

    cout << "\n----------------------------------------"<<endl;
    cout << "El nuevo valor del primer numero es: "<<x<<endl;
    cout << "El nuevo valor del segundo numero es: "<<y<<endl;
}