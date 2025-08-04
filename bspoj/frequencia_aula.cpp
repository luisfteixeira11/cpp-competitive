#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> alunos (1000000, 0);
    for(int i=0; i<n;i++){
        int num; cin>>num;
        alunos[num] = 1;
    }
    int soma =0;
    for (int i=0; i<1000000; i++){
        soma +=alunos[i];
    }
    cout<<soma<<endl;
}