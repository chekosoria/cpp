/*
Ejercicio 5. 
a) Hacer 2 estructuras una llamada promedio y otra llamada alumno.
La estructura promedio debe tener los siguientes miembros:
- nota 1, nota 2, nota 3
La estructura alumno debe tener los siguientes miembros:
- nombre, sexo, edad
b) Hacer que la estructura promedio este anidada en la estructura alumno 
c) Pedir todos los datos para un alumno
d) Calcular su promedio
e) Imprimir todos los datos incluidos el promedio
*/
#include <iostream>
#include <iomanip>

using namespace std;

struct promedio {
    double nota1;
    double nota2;
    double nota3;
    double final;
};

struct alumno {
    string nombre;
    char sexo;
    int edad;
    promedio promedioAlumno;
};

int main() {
    int x;

    cout << "Ingrese la cantidad de alumnos que desea capturar: ";
    cin >> x;

    alumno alumnos[x];

    for (int i = 0; i < x; i++) {
        cin.ignore();
        cout << "\nCapturando datos del alumno " << i + 1 << endl;
        cout << "\nIngrese nombre: ";
        getline(std::cin, alumnos[i].nombre);
        cout << "\nIngrese F para femenino o M para masculino: ";
        cin >> alumnos[i].sexo;
        cout << "\nIngrese edad: ";
        cin >> alumnos[i].edad;
        cout << "\nIngrese primera nota: ";
        cin >> alumnos[i].promedioAlumno.nota1;
        cout << "\nIngrese segunda nota: ";
        cin >> alumnos[i].promedioAlumno.nota2;
        cout << "\nIngrese tercera nota: ";
        cin >> alumnos[i].promedioAlumno.nota3;
        alumnos[i].promedioAlumno.final = (alumnos[i].promedioAlumno.nota1 + alumnos[i].promedioAlumno.nota2 + alumnos[i].promedioAlumno.nota3) / 3;
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < x; i++) {
        cout << "\nMostrando los datos del alumno " << i + 1 << endl;
        cout << "\nNombre: " << alumnos[i].nombre << endl;
        cout << "Sexo: " << alumnos[i].sexo << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Primera nota: " << alumnos[i].promedioAlumno.nota1 << endl;
        cout << "Segunda nota: " << alumnos[i].promedioAlumno.nota2 << endl;
        cout << "Tercera nota: " << alumnos[i].promedioAlumno.nota3 << endl;
        cout << "Promedio: " << alumnos[i].promedioAlumno.final << endl;
    }

    return 0;
}
