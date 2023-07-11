/*
Ejercicio 10. Escriba un programa que calcule el valor de 1!+2!+3!+...+n! (suma de factoriales)
*/
#include<iostream>
using namespace std;

int main() {
    int x = 0, total = 0;

    cout << "Ingrese un valor de X: ";
    cin >> x;

    for(int i = 1; i <= x; i++) {
        unsigned long long factorial = 1;

        if(i < 0) {
            continue;
        }
        else if(i > 1) {
            for (int j = 2; j <= i; j++) {
                factorial *= j;
            }
        }

        total += factorial;
    }

    cout << "\nLa suma de los factoriales de 1 a " << x << " es: " << total << endl;

    return 0;
}
