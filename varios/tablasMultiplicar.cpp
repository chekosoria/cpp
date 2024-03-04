#include <iostream>
using namespace std;

int main()
{
    int numero = 0;

    cout << "Ingresa un numero: ";
    cin >> numero;

    for (int i = 0; i <= 10; i++)
    {
        cout << numero << "x" << i << "=" << numero * i << endl;
    }
    return 0;
}