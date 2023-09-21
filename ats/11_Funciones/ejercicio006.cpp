/*
Ejercicio 6. Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres argumentos que se transmitan a la función cuando sea llamada.
Suponga que los tres argumentos serán del mismo tipo de datos.
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
    cout << "El mayor es: " << midato << endl;
};

void menu(){
    cout << "----------------------------------------"<<endl;
    cout << "-------------- BIENVENIDO --------------"<<endl;
    cout << "----------------------------------------"<<endl;
    cout << "Para comparar enteros seleccione....... 1"<<endl;
    cout << "Para comparar decimales seleccione..... 2"<<endl;
    cout << "Ingrese opcion: ";
}

void opciones(int a){
     switch (a)
    {
    case 1:
        int miEntero,x,y,z;
        cout << "Ingrese 1er numero: ";
        cin >> x;
        cout << "Ingrese 2do numero: ";
        cin >> y;
        cout << "Ingrese 3er numero: ";
        cin >> z;

        if(x >= y){
            miEntero = x;
        }
        else{
            miEntero = y;
        }

        if(miEntero <= z){
            miEntero = z;
        }

        despliegue(miEntero);

        break;
    case 2:
        double miDecimal,m,n,o;
        cout << "Ingrese 1er numero: ";
        cin >> m;
        cout << "Ingrese 2do numero: ";
        cin >> n;
        cout << "Ingrese 3er numero: ";
        cin >> o;

        if(m >= n){
            miDecimal = m;
        }
        else{
            miDecimal = n;
        }

        if(miDecimal <= o){
            miDecimal = o;
        }

        despliegue(miDecimal);

        break;
    default:
        break;
    }
}