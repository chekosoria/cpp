#include <iostream>
using namespace std;

class Operacion
{
private:
	int a;
   	int b;
public:
	void suma (void){
  	 cout << "dame el valor de a:  ";      cin >> a;
   	cout << "dame el valor de b;  ";      cin >> b;
  	 cout << "La suma es: " << a+b << endl;
}
};


int main(){

Operacion s1;


s1.suma();
system("pause");
}
