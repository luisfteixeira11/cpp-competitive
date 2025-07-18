#include<iostream>
#include<vector>
using namespace std;

vector<int> quicksort(vector<int> array) {
    if (array.size() < 2) {
        return array;
    } else {
        int pivo = array[0];
        vector<int> menores;
        vector<int> maiores;

        for (int i = 1; i < array.size(); i++) {
            if (array[i] <= pivo) {
                menores.push_back(array[i]);
            } else {
                maiores.push_back(array[i]);
            }
        }
        vector<int> resultado;
        vector<int> menores_ordenados = quicksort(menores);
        vector<int> maiores_ordenados = quicksort(maiores);

        resultado.insert(resultado.end(), menores_ordenados.begin(), menores_ordenados.end());
        resultado.push_back(pivo);
        resultado.insert(resultado.end(), maiores_ordenados.begin(), maiores_ordenados.end());

        return resultado;
    }
}

int main(){
    int n; cin>>n;
    vector<int> v (n);
    for (int a=0; a<n; a++){
        cin>>v[a];
    }
    vector<int>ordenado = quicksort(v);
    for (int numero : ordenado){
        cout<<numero<<" ";
    }
    cout<<endl;
    return 0;
}