/*
Realice un programa con Programación orientada a objetos en C++: 
Que por medio de una función pida 2 enteros y los sume y regrese el resultado a la llamada de la función.
*/
#include <iostream>
using namespace std;

class Operacion
{
private:
	int a;
   	int b;
public:
	void suma (void){
  	 cout << "Ingrese el valor del primer numero:  ";
	 cin >> a;
	 cout << "\nIngrese el valor del segundo numero:  ";
	 cin >> b;
  	 cout << "\nEl resultado de la suma es: " << a+b << endl;
}
};

int main(){

Operacion s1;

s1.suma();

return 0;
}
