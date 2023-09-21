/*
Ejercicio 5. Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del argumento unico que se le transmite cuando es invocada la funcion.
*/
#include<iostream>
using namespace std;

template <class T>
void despliegue(T midato);

void menu();

void opciones(int a);

int main(){
    int opcion;

    menu();

    cin >> opcion;

    opciones(opcion);

    return 0;
}

template <class T>
void despliegue(T midato){
    cout << "El dato ingresado es: " << midato << endl;
};

void menu(){
    cout << "------------------------------"<<endl;
    cout << "--------- BIENVENIDO ---------"<<endl;
    cout << "------------------------------"<<endl;
    cout << "Para entero seleccione....... 1"<<endl;
    cout << "Para decimal seleccione...... 2"<<endl;
    cout << "Para caracter seleccione..... 3"<<endl;
    cout << "Ingrese opcion: ";
}

void opciones(int a){
     switch (a)
    {
    case 1:
        int miEntero;
        cout << "Ingrese numero entero: ";
        cin >> miEntero;
        despliegue(miEntero);
        break;
    case 2:
        double miDecimal;
        cout << "Ingrese numero decimal: ";
        cin >> miDecimal;
        despliegue(miDecimal);
        break;
    case 3:
        char miCaracter;
        cout << "Ingrese caracter: ";
        cin >> miCaracter;
        despliegue(miCaracter);
        break;
    default:
        break;
    }
}