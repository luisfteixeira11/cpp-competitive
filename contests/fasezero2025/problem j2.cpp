#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, K, x;
    cin >> N >> K;
    long long posicao;
    vector<long long> vetor;
    for (long long i = 0; i<N; i++){
        cin >> x;
        vetor.push_back(x);
    }
    vector<long long> b (N);
    for(int j=0; j<N; j++){
        long long fase;
        long long filtro = 1;
        for (int i=1; i<=N; i++){ //pode ser um while
            fase = vetor[filtro-1];
            filtro = (i%N)+1;
        }
        b[j] = 
    }
    return 0;
}

/* deu nao:( */