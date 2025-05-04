#include <iostream>
#include <vector>
using namespace std;

int maiorc (vector<vector<int>> v, int n, int m){
    int maiorcol=-1;
    for (int i=0; i<m; i++){
        int somacol=0;
        for (int j=0; j<n; j++){
            somacol+= v[i][j];
        }
        if(maiorcol<somacol){
            maiorcol = somacol;
        }
    }
    return maiorcol;
}

int main(){
    int n, m, maiorcol, maiorlin=-1, a; cin>>n>>m;
    vector<vector<int>> v(m, vector<int> (n)); 
    for (int i=0; i<n; i++){
        int somalin=0;
        for (int j=0; j<m; j++){
            cin>>a;
            v[j][i] = a;
            somalin+=a;
        }
        if(maiorlin<somalin){
            maiorlin = somalin;
        }
    }
    maiorcol = maiorc(v, n, m);
    cout<<max(maiorlin, maiorcol)<<endl;
}