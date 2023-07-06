/*
Elercicio 9. Escriba un programa que calucle el valor de 1*2*3...*2 (factorial)
*/
#include<iostream>
using namespace std;

int main(){
    int x, factorialX = 1;

    cout<<"Ingrese un valor de X: ";
    cin>>x;

    if(x < 0){
        cout<<"No es posible calcular el factorial de un numero negativo!"<<endl;
        return 0;
    }
    else if(x == 0 || x == 1){
       factorialX = 1;
    cout<<"\n"<<x<<"!= "<<factorialX<<endl; 
    }
    else {
        for (int i = 1; i <= x; i++){
        factorialX *= i;
    }
    cout<<"\n"<<x<<"!= "<<factorialX<<endl; 
    }

    return 0;
}