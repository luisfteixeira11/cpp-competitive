#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n, tempo=10; cin>>n;
    vector <int> v (n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    int tempoatualizado=v[0];
    for (int i=1; i<n; i++){
        if (tempoatualizado+10>v[i]){
            tempo +=v[i]-tempoatualizado;
            tempoatualizado=v[i];
        }else{
            tempo+=10;
            tempoatualizado = v[i];
        }
        
    }
    cout<<tempo<<endl;
}