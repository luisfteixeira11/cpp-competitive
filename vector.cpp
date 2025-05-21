#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>numeros = {13, 2, 6, 5};

    for(int i=0; i<numeros.size(); i++){
        cout<<numeros[i]<<endl;
    }
}


    /*vector<int>numeros = {13, 2, 6, 5};

    for (int numero : numeros){
        cout<<numero<<endl;
    }

    numeros.push_back(2); //adiciona um item especifico no ultimo elemento da lista, aumentando o tamanho
    numeros.pop_back(); //apaga o último elemento de uma lista
    int x = numeros.size(); //atribui para x o valor do tamanho de itens no vetor
    numeros.front(); //pega o primeiro elemento
    numeros.back(); //pega o último elemento



    return 0; */


