#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    int maior = -1, soma = 0;
    vector<vector<int>> matriz(n, vector<int>(n));
    vector<int> somalin(n);
    vector<int> somacol(n);
    for (int i=0;i<n; i++){
        for (int j=0; j<n; j++){
            cin >> matriz [i] [j];
            somalin[i] += matriz[i][j];
            somacol[j] += matriz[i][j];
        }
    }
    
    for (int i=0;i<n; i++){ //somar os pesos
        for (int j=0; j<n; j++){
            soma = somalin[i]+somacol[j]-(2*matriz[i][j]);
            if (soma > maior){
                maior = soma;
            }
        }
    }

    cout<<maior<<endl;
    return 0;
}