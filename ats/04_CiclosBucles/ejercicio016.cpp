/*
Ejercicio 16. Realice un programa que calcule la descomposición en factores primos de un número entero.
Por ejempoo 20 = 2 * 2 * 5
*/
#include<iostream>
using namespace std;

int main(){
	int x;
	
	cout<<"Ingrese un numero: "; 
	cin>>x;
	
    if(x > 1){
    	cout<<"\nDescomponiendo el numero ingresado en factores primos..."<<endl;
        cout<<"\n";
        cout<<"Los factores primos de "<<x<< " son: ";

    	for(int i = 2; x > 1; i++){
	    	while(x % i == 0){
		    	cout<<i<<" ";
			    x /= i;
    		}
	    }

    }
	else{
        cout<<"\nValor fuera de rango"<<endl;
    }
	return 0;
}