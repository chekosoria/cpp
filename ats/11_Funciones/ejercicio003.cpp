/*
Ejercicio 3. Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia en número entero positivo y despliegue el resultado.
El número entero positivo deberá ser el segundo valor transmitido a la función.
*/
#include<iostream>
#include<math.h>
using namespace std;

void funpot(int a, int b);

void ingresar();

int x,y;

int main(){

    ingresar();
    
    funpot(x,y);

    return 0;
}

void funpot(int a, int b){
    int c = 0;
    // Potencia positiva de numero positivo
    if(a >= 0 && b > 0){
        c = pow(a,b);

        cout<<"\nEl resultado es: "<<c<<endl;
    }
    // Potencia positiva par de un numero negativo
    else if(a < 0 && (b > 0 && b % 2 == 0)){
        a *= -1;
        c = pow(a,b);

        cout<<"\nEl resultado es: "<<c<<endl;
    }
    // Potencia positiva impar de un numero negativo
    else if(a < 0 && (b > 0 && b % 2 != 0)){
        c = pow(a,b);

        cout<<"\nEl resultado es: "<<c<<endl;
    }
    // Numero elevado a la 0
    else if((a >= 0 || a < 0) && b == 0){
        c = 1;

        cout<<"\nEl resultado es: "<<c<<endl;
    }
    // Potencia negativa de numero positivo
    else if(a >= 0 && b < 0){
        b *= -1;
        cout<<"\nEl resultado es: 1/"<<a<<"^"<<b<<endl;
    }
    // Potencia negativa de un numero negativo
    else if(a < 0 && b < 0){
        b *= -1;
        cout<<"\nEl resultado es: 1/("<<a<<")^"<<b<<endl;
    }
};

void ingresar(){
    cout<<"\nIngrese numero: ";
    cin>>x;
    cout<<"\nIngrese potencia: ";
    cin>>y;
};
