#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for (int i=0; i<n; i++){
        int nalunos; cin>>nalunos;
        vector<int> va(nalunos); 
        double soma = 0, contador=0;
        for(int i=0; i<nalunos; i++){
            cin>>va[i];
            soma += va[i];
        }
        double media = soma/nalunos;
        for(int i=0; i<nalunos; i++){
            if (va[i]>media){
                contador++;
            }
        }
        double p = (contador*100)/nalunos;
        cout<< setprecision(3)<<fixed<<p<<"%"<<endl;
    }
}