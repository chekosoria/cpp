/*
Ejercicio 11. Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número total de días desde la fecha 1/1/2000 y parámetros de referencia
nombrados año, mes y día. La función es calcular el año, mes y día actual para el número dado de días que se le transmitan. Usando las referencias, la función deberá
alterar en forma directa los argumentos respectivos en la función que llama. Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.
*/
#include<iostream>
using namespace std;

void calc(int,int&,int&,int&);

int main(){
	int dias,a,m,d;
	
	cout << "Ingrese el numero de dias transcurridos: ";
	cin >> dias;
	
	calc(dias,a,m,d);
	
	cout << "Fecha Actual: " << d+1 << "/"<<m+1 << "/" << a+2000 << endl;	
	
	return 0;
}

void calc(int tdias,int& aa,int& mm,int& dd){
	aa = tdias/365;
	tdias %= 365;
	mm = tdias/30;
	dd = tdias%30;
}
