#include <iostream>
using namespace std;

int main(){
    char lista[10][20];
    char nome[20];
    int posizione=0;

    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            nome[j]= ' ';
            lista[i][j]= ' ';
        }
    }

    for(int i=0;i<10;i++){
        cin>>lista[i];
    }
    cin>>nome;
    if(funzione(lista,posizione,nome)){
        cout<<posizione;
    }else{
        cout<<"non presente";
    }
    return 0;
}
