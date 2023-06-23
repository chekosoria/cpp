#include <iostream>
using namespace std;

int suma(int, int);

int main(){
    int x, y, resultado = 0;

    cout << "Ingrese el valor del primer numero: ";
    cin >> x;
    cout << "\nIngrese el valor del segundo numero: ";
    cin >> y;


    resultado = suma(x,y);

    cout <<"\nEl resultado es: " << resultado << endl;

    return 0;
}

int suma(int a, int b){
    return (a+b);
}