#include<iostream>
#include<vector>
using namespace std;

bool busca_binaria(vector<vector<int>> ma, int num, int m, int coluna){
    int inicio = 0;
    int fim = m-1;
    while(inicio<=fim){
        int meio = inicio + (fim-inicio)/2;
        if(ma[meio][coluna]==num){
            return true;
        }
        if (ma[meio][coluna] < num) {
            inicio = meio + 1; // Procurar na metade direita
        } else {
            fim = meio - 1; // Procurar na metade esquerda
        }
    }
    return false;
}

int busca(vector<vector<int>> ma, int num, int m, int n) {
    int contador =0;
    for(int i=0; i<n; i++){
        if (busca_binaria(ma, num, m, i)){
            contador++;
        }
    }

    return contador;
}

int main(){
    int n, m, k; cin>>n>>m>>k;
    vector<vector<int>> ma(n, vector<int>(m));
    int fator_multi = 1;
    if (k==1){
        cout<<m*n<<endl;
        return 0;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ma[i][j] = fator_multi*(j+1);
        }
        fator_multi++;
    }
    for (int i=1; i<=m*n; i++){ //vai ate m*n porque é o ultimo elemento (o maior);
        k-=busca(ma, i, m, n);
        if (k<=0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}