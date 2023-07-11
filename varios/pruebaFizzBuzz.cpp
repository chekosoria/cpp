/*
Escribe un programa que muestre en consola los números de 1-100 con un salto de línea entre cada impresión, sustituyendo los
siguientes:
1) Multiplos de 3 por la palabra "fizz"
2) Multiplos de 5 por la palabra "buzz"
3) Multiplos de 3 y 5 a la vez por la palabra fizzbuzz
*/
#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout<<"fizzbuzz"<<endl;
        }
        else if (i % 3 == 0)
        {
            cout<<"fizz"<<endl;
        }
        else if (i % 5 == 0)
        {
            cout<<"buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}