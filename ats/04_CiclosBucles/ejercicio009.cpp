/*
Elercicio 9. Escriba un programa que calucle el valor de 1*2*3...*2 (factorial)
*/
#include<iostream>
using namespace std;

int main() {
    int x;

    cout << "Ingrese un valor de X: ";
    cin >> x;

    if(x < 0) {
        cout << "No es posible calcular el factorial de un número negativo!" << endl;
        return 0;
    }
    else {
        unsigned long long factorialX = 1;

        for (int i = 1; i <= x; i++) {
            factorialX *= i;
        }

        cout << "\n" << x << "! = " << factorialX << endl;
    }

    return 0;
}
