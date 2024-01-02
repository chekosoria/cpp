#include <iostream>

using namespace std;

int main(){
    int x=0, y=0, resultado=0;

    cout<<"Ingrese primer numero: ";
    cin>>x;
    cout<<"Ingrese segundo numero: ";
    cin>>y;

    resultado = x*y;

    cout<<"El resultado de la multiplicacion es: "<< resultado <<endl;

    resultado = x + y;

    cout<<"El resultado de la suma es: " << resultado <<endl;
    
    return 0;
}