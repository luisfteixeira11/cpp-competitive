#include <iostream>
#include <vector>
using namespace std;

int versomadiagonal(vector<vector<int>>v, int n){
    int j=0, somad1=0, somad2=0;
    for(int i=0; i<n; i++){
        for(j; j==i; j++){
            somad1 +=v[j][i];
        }
    }
    int j1=n-1;
    for(int i=0; i<n; i++){
        somad2 +=v[i][j1];
        j1--;
    }
    if(somad1==somad2){
        return somad1;
    }else{
        return -1;
    }
}

int versomadaslinhas(vector<vector<int>>v, int n){
    int somaigual=0;
    for (int i=0; i<n; i++){
        int soma=0;
        for (int j=0; j<n; j++){
            soma +=v[j][i];
        }
        
        if (somaigual!=soma&&i!=0){
            somaigual=-2;
            break;
        }
        somaigual=soma;
    }
    return somaigual;
}

int versomadascolunas(vector<vector<int>>v, int n){
    int somaigual=0;
    for (int i=0; i<n; i++){
        int soma=0;
        for (int j=0; j<n; j++){
            soma +=v[i][j];
        }
        
        if (somaigual!=soma&&i!=0){
            somaigual = -1;
            break;
        }
        somaigual=soma;
    }
    return somaigual;
}

int main(){
    int n; cin>>n;
    vector<vector<int>>matriz(n, vector<int>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>matriz[i][j];
        }
    }
    int col =versomadascolunas(matriz, n);
    int lin = versomadaslinhas(matriz,n);
    int dia = versomadiagonal(matriz,n);
    if(col==lin&&lin==dia&&dia==col){
        cout<<lin<<endl;
    } else{
        cout<<-1<<endl;
    }

    return 0;
}