/*
Ejercicio 7. Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo 
vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector.
Muestra el contenido del nuevo vector en la salida estándar
*/
#include<iostream>
using namespace std;

int main(){
    char terminos[] = {'a','b','c','d','e'};
    char variables[] = {'v','w','x','y','z'};
    int arrSize;
    arrSize = (sizeof terminos/sizeof terminos[0])+(sizeof variables/sizeof variables[0]);
    char literales[arrSize];

    for(int i = 0; i < 5; i++){
        literales[i] = terminos[i];
        cout<<"literales:["<<i<<"] = "<<literales[i]<<endl;
    }
    for(int i = 0; i < 5; i++){
        literales[(i+5)] = variables[i];
        cout<<"literales:["<<(i+5)<<"] = "<<literales[(i+5)]<<endl;
    }

    return 0;
}