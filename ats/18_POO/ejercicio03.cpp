/*
Ejercicio 3. Relice un programa en C++, de tal manera que se construya una solución para la jerarquía(herencia) de las clases
mostradas en la siguiente figura:

                            Persona
                           /       \               
                   Empleado         Estudiante
                                         |
                                    Universitario
*/
#include<iostream>
using namespace std;

void banner();

class Persona {
    private:
        string nombre;
        string apellido;
        string nacionalidad;
        int edad;
    public:
        Persona();
        void setDatosPrincipales(string, string, string, int);
        string getNombre();
        string getApellido();
        string getNacionalidad();
        int getEdad();
        void mostrarPersona();
};

Persona::Persona() {}

void Persona::setDatosPrincipales(string nombre_, string apellido_, string nacionalidad_, int edad_) {
    nombre = nombre_;
    apellido = apellido_;
    nacionalidad = nacionalidad_;
    edad = edad_;
}

string Persona::getNombre() {
    return nombre;
}

string Persona::getApellido() {
    return apellido;
}

string Persona::getNacionalidad() {
    return nacionalidad;
}

int Persona::getEdad() {
    return edad;
}

void Persona::mostrarPersona() {
    cout << "Nombre completo: " << getNombre() << " " << getApellido() << endl;
    cout << "Edad: " << getEdad() << endl;
    cout << "Nacionalidad: " << getNacionalidad() << endl;
}

class Empleado : public Persona {
    private:
        string area;
        string puesto;
        string claveEmpleado;
        int antiguedad;
    public:
        Empleado();
        void setDatosEmpleado(string, string, string, int, string, string, string, int);
        string getArea();
        string getPuesto();
        string getClaveEmpleado();
        int getAntiguedad();
        void mostrarEmpleado();
};

Empleado::Empleado() {}

void Empleado::setDatosEmpleado(string nombre_, string apellido_, string nacionalidad_, int edad_, string area_, string puesto_, string claveEmpleado_, int antiguedad_) {
    setDatosPrincipales(nombre_, apellido_, nacionalidad_, edad_);
    area = area_;
    puesto = puesto_;
    claveEmpleado = claveEmpleado_;
    antiguedad = antiguedad_;
}

string Empleado::getArea() {
    return area;
}

string Empleado::getPuesto() {
    return puesto;
}

string Empleado::getClaveEmpleado() {
    return claveEmpleado;
}

int Empleado::getAntiguedad() {
    return antiguedad;
}

void Empleado::mostrarEmpleado() {
    cout << "Nombre: " << getNombre() << " " << getApellido() << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Puesto: " << getPuesto() << endl;
    cout << "Clave de empleado: " << getClaveEmpleado() << endl;
    cout << "Antiguedad: " << getAntiguedad() << " anios" << endl;
}

class Estudiante : public Persona{
    private:
    string nivel;
    string estatus;
    public:
    Estudiante();
    void setEstudiante(string, string, string, int, string, string);
    string getNivel();
    string getEstatus();
    void mostrarEstudiante();
};

Estudiante::Estudiante() {}

void Estudiante::setEstudiante(string nombre_, string apellido_, string nacionalidad_, int edad_, string nivel_, string estatus_){
    setDatosPrincipales(nombre_, apellido_, nacionalidad_, edad_);
    nivel = nivel_;
    estatus = estatus_;
}

string Estudiante::getNivel(){
    return nivel;
}

string Estudiante::getEstatus(){
    return estatus;
}

void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Nivel: "<<getNivel()<<endl;
    cout<<"Estatus: "<<getEstatus()<<endl;
}

class Universitario : public Estudiante{
    private:
    string matricula;
    string estatusEscolar;
    int semestre;
    double promedio;
    public:
    Universitario();
    void setUniversitario(string, string, string, int, string, string, string, string, int, double);
    string getMatricula();
    string getEstatusEscolar();
    int getSemestre();
    double getPromedio();
    void mostrarUniversitario();
};

Universitario::Universitario() {}

void Universitario::setUniversitario(string nombre_, string apellido_, string nacionalidad_, int edad_, string nivel_, string estatus_, string matricula_, string estatusEscolar_, int semestre_, double promedio_){
    setEstudiante(nombre_, apellido_, nacionalidad_, edad_, nivel_, estatus_);
    matricula = matricula_;
    estatusEscolar = estatusEscolar_;
    semestre = semestre_;
    promedio = promedio_;
}

string Universitario::getMatricula(){
    return matricula;
}

string Universitario::getEstatusEscolar(){
    return estatusEscolar;
}

int Universitario::getSemestre(){
    return semestre;
}

double Universitario::getPromedio(){
    return promedio;
}

void Universitario::mostrarUniversitario(){
    mostrarPersona();
    cout<<"Matricula: "<<getMatricula()<<endl;
    cout<<"Semestre: "<<getSemestre()<<endl;
    cout<<"Promedio: "<<getPromedio()<<endl;
    cout<<"Estatus actual: "<<getEstatusEscolar()<<endl;
}
    
int main(){
    Persona p1;

    p1.setDatosPrincipales("Homer","Simpson","Americano",41);

    banner();

    p1.mostrarPersona();

    Empleado e1;

    e1.setDatosEmpleado("Homer","Simpson","Americano",41,"Inspector de seguridad","Sector 7G","001",15);

    banner();

    e1.mostrarEmpleado();

    Estudiante es1;

    es1.setEstudiante("Homer","Simpson","Americano",41,"Universidad","Activo");

    banner();

    es1.mostrarEstudiante();

    Universitario u1;

    u1.setUniversitario("Homer","Simpson","Americano",41,"Universidad","Activo","A123456","Inscrito",3,8.88);

    banner();

    u1.mostrarUniversitario();

    return 0;
}

void banner(){
    cout<<"-------------------------------"<<endl;
}