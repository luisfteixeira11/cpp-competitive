#include<iostream>
#include<vector>
using namespace std;

int comparar_distancia(vector<int> v, int n, int p){
    int dise;
    int disd;
    dise = 0;
    disd = 0;
    for (int pe=p; pe>=0; pe--){
        if (v[pe] == -1){
            dise++;
        }
        else{
            break;
        }
        if (pe==0){
            dise = 100000;
        }

    }
    for (int pd=p; pd<n; pd++){
        
        if (v[pd] == -1){
            disd++;
        }
        else{
            break;
        }
        if (pd == n-1){
            disd = 100000;
        }
    }
    if (min(disd, dise)>=9){
        return 9;
    }
    return min(disd, dise);
}

int main(){
    int n; cin>>n;
    vector<int> v(n);
    vector<int> distancia(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    for(int i=0; i<n;i++){
        cout<<comparar_distancia(v, n, i)<<" ";
    }
    
    return 0;
}