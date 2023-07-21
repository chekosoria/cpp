/*
Ejercicio 9. Realice un programa que lea una cadena de caracteres de la entrada estándar y muestre en la salida estándar cuántas
ocurrencias de cada vocal existen en la cadena.
*/
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[30];
    int x = 0,a = 0,e = 0,i = 0,o = 0,u = 0;
    
    cout<<"Ingrese una palabra: ";
    cin.getline(palabra,30,'\n');

    x = strlen(palabra);

    strlwr(palabra);

    for(int j = 0; j < x; j++){
        if(palabra[j] == 'a'){
            a++;
        }
        else if(palabra[j] == 'e'){
            e++;
        }
        else if(palabra[j] == 'i'){
            i++;
        }
        else if(palabra[j] == 'o'){
            o++;
        }
        else if(palabra[j] == 'u'){
            u++;
        }
    }

    cout<<"\nEn "<<palabra<<" hay "<<a<<" letras a"<<endl;
    cout<<"En "<<palabra<<" hay "<<e<<" letras e"<<endl;
    cout<<"En "<<palabra<<" hay "<<i<<" letras i"<<endl;
    cout<<"En "<<palabra<<" hay "<<o<<" letras o"<<endl;
    cout<<"En "<<palabra<<" hay "<<u<<" letras u"<<endl;

    return 0;
}