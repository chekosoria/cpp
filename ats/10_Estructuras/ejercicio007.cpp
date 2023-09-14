/*
Ejercicio 7. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe tener tres campos:
- horas, minutos y segundos
Escriba un programa que dado N etapas calcule el tiempo total empleado en correr todas las etapas.
*/
#include<iostream>
#include <vector>
using namespace std;

struct etapas
{
    int hora;
    int minutos;
    int segundos;
    int total;
};

int main(){
    int x;
    int acumulado = 0;

    cout << "Ingrese la cantidad de etapas de la carrera: ";
    cin >> x;

    if(x <= 0){
        cerr << "Error, la cantidad de etapas debe ser mayor a 0"<<endl;
        return 1;
    }

    vector<etapas> carrera(x);

    for(int i =0; i < x; i++){
        cout << "Capturando datos de la carrera "<< i + 1 <<endl;
        cout << "Horas de recorrido: ";
        cin >> carrera[i].hora;
        cout << "Minutos de recorrido: ";
        cin >> carrera[i].minutos;
        cout << "Segundos de recorrido: ";
        cin >> carrera[i].segundos;

         if (carrera[i].hora < 0 || carrera[i].minutos < 0 || carrera[i].segundos < 0)
        {
            cerr << "Error, los valores de horas, minutos y segundos no deben ser numeros negativos." << endl;
            return 1;
        }

        carrera[i].total = (carrera[i].hora * 3600) + (carrera[i].minutos * 60) + carrera[i].segundos;
        acumulado += carrera[i].total;
    }

    int hr, min;

    hr = acumulado / 3600;
    acumulado -= (hr * 3600); 
    min = acumulado / 60;
    acumulado -= (min * 60);

    cout << "\nResultados" << endl;
    cout << "Total de horas: " << hr << endl;
    cout << "Total de minutos: " << min << endl;
    cout << "Total de segundos: " << acumulado << endl;

    return 0;
}