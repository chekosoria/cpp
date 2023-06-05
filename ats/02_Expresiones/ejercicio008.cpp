/*
Ejercicio 008. Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la sdalida
estándar su hipotenusa.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a=0, b=0, h=0;

    cout<<"Ingrese el valor del primer cateto: ";
    cin>>a;
    cout<<"Ingrese el valor del segundo cateto: ";
    cin>>b;

    h = sqrt(pow(a,2)+pow(b,2));

    cout.precision(2);
    cout<<"\nEl valor de la hipotenusa es: "<<h<<endl;
    
    return 0;
}