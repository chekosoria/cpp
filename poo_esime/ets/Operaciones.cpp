#include <iostream>

class Calculadora {
public:
    // Constructor
    Calculadora() {
        std::cout << "Calculadora iniciada." << std::endl;
    }

    // Destructor
    ~Calculadora() {
        std::cout << "Calculadora apagada." << std::endl;
    }

    // Constructor de copia
    Calculadora(const Calculadora& otra) {
        std::cout << "Calculadora copiada." << std::endl;
    }

    // Método para sumar 3 números reales sin mostrar el resultado
    void sumaSinMostrarResultado(double num1, double num2, double num3) {
        double resultado = num1 + num2 + num3;
        std::cout << "Sumando " << num1 << ", " << num2 << " y " << num3 << "..." << std::endl;
    }

    // Método para multiplicar 2 números sin enviar ni recibir argumentos
    void multiplicacionSinArgumentos() {
        double num1, num2;
        std::cout << "Introduce dos números para multiplicar: ";
        std::cin >> num1 >> num2;
        double resultado = num1 * num2;
        std::cout << "El resultado de la multiplicación es: " << resultado << std::endl;
    }

    // Método para calcular el cuadrado de un número recibiendo argumentos
    double calcularCuadrado(double num) {
        double cuadrado = num * num;
        std::cout << "El cuadrado de " << num << " es " << cuadrado << std::endl;
        return cuadrado;
    }
};

int main() {
    // Crear una instancia de la calculadora
    Calculadora miCalculadora;

    // Realizar una suma sin mostrar el resultado
    miCalculadora.sumaSinMostrarResultado(5.0, 3.0, 2.0);

    // Realizar una multiplicación
    miCalculadora.multiplicacionSinArgumentos();

    // Calcular el cuadrado de un número
    double num = 4.0;
    miCalculadora.calcularCuadrado(num);

    return 0;
}