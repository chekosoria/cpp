/*
Ejercicio 1. Construya una clase llamada rectángulo que tenga los siguientes atributos:
- Largo
- Ancho
Y los siguientes métodos:
- perimetro()
- area()
*/
#include<iostream>

using namespace std;

class Rectangulo{
    private:
    float largo;
    float ancho;
    public:
    Rectangulo(float,float);
    void perimetro();
    void area();
};

Rectangulo::Rectangulo(float _largo, float _ancho){
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::perimetro(){
    float p = 0;
    p = (2*largo)+(2*ancho);
    cout<<"El perimetro del rectangulo es: "<<p<<" unidades"<<endl;
}

void Rectangulo::area(){
    float a = 0;
    a = largo*ancho;
    cout<<"El area del rectangulo es: "<<a<<" unidades al cuadrado"<<endl;
}

int main(){
    float b=0, h=0;

    cout<<"Ingrese el largo del rectangulo: ";
    cin>>b;
    cout<<"Ingrese el ancho del rectangulo: ";
    cin>>h;

    Rectangulo r1(b,h);

    r1.perimetro();
    r1.area();

    return 0;
}