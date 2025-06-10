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


    for (long long i = 0; i < N; i++) {
        long long j = i;
        long long fase = vetor[i];
        
        while(fase <= vetor[j]) {
            fase += K;
            j = ((j+1) % N);
        }
        
        cout << j + 1 <<" ";
    }
    return 0;
}

/* deu nao:( */