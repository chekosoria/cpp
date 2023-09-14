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

    alumno miAlumno;

    cout << "\nCapturando datos del alumno" << endl;
    cout << "\nIngrese nombre: ";
    getline(cin, miAlumno.nombre);
    cout << "\nIngrese F para femenino o M para masculino: ";
    cin >> miAlumno.sexo;
    cout << "\nIngrese edad: ";
    cin >> miAlumno.edad;
    cout << "\nIngrese primera nota: ";
    cin >> miAlumno.promedioAlumno.nota1;
    cout << "\nIngrese segunda nota: ";
    cin >> miAlumno.promedioAlumno.nota2;
    cout << "\nIngrese tercera nota: ";
    cin >> miAlumno.promedioAlumno.nota3;
    miAlumno.promedioAlumno.final = (miAlumno.promedioAlumno.nota1 + miAlumno.promedioAlumno.nota2 + miAlumno.promedioAlumno.nota3) / 3;


    cout << fixed << setprecision(2);

        cout << "\nMostrando los datos del alumno " << endl;
        cout << "\nNombre: " << miAlumno.nombre << endl;
        cout << "Sexo: " << miAlumno.sexo << endl;
        cout << "Edad: " << miAlumno.edad << endl;
        cout << "Primera nota: " << miAlumno.promedioAlumno.nota1 << endl;
        cout << "Segunda nota: " << miAlumno.promedioAlumno.nota2 << endl;
        cout << "Tercera nota: " << miAlumno.promedioAlumno.nota3 << endl;
        cout << "Promedio: " << miAlumno.promedioAlumno.final << endl;

    return 0;
}
