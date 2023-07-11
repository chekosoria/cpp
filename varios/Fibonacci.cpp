#include<iostream>
using namespace std;

int main(){
    int x, t1 = 1, t2 = 0, nextTerm = 0;

    cout<<"Ingrese el numero limite de la secuencia: ";
    cin>>x;

    for(int i = 1; i < x; i++){
        nextTerm = t1 + t2;
        cout<<nextTerm<<" ";
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}