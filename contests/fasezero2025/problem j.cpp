#include <bits/stdc++.h>
using namespace std;

long long main(){
    long long N, K, x;
    cin >> N >> K;
    long long posicao;
    vector<long long> vetor;
    for (long long i = 0; i<N; i++){
        cin >> x;
        vetor.push_back(x);
    }

    for (long long i = 0; i < N; i++){
        long long fase = vetor[i];
        while (true){
        fase += K;
        if (fase>vetor[(i%N)+1]){
            posicao = i+1;
            cout << posicao << endl;
            break;
        }
        }
    }

}

/* deu nao:( */