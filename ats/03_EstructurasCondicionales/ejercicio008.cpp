/*
Ejercicio 8. Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número 
coincide con alguno de los introducidos con anterioridad.
*/
#include <iostream>
using namespace std;

int main(){
    double a = 0, b = 0, c = 0, d = 0;

    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    cout<<"ingrese el tercer numero: ";
    cin>>c;
    cout<<"Ingrese el numero a comparar: ";
    cin>>d;

    if(a == d || b == d || c == d){
        cout<<"El numero ha sido encontrado"<<endl;
    }
    else{
        cout<<"El numero no ha sido encontrado"<<endl;
    }
    return 0;
}