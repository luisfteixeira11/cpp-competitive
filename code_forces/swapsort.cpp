#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,  swp=0; cin>>n;
    long long t;
    vector <int> v (n);
    vector <pair<int, int>> s;
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for (int i=n-1; i>0; i--){
        int maior = INT_MIN;
        int contador;
        for (int j=0; j<=i; j++){
            if (v[j] > maior){
                maior = v[j];
                contador = j;
            }
        }
        if (contador != i){
            swp++;
            v[contador] = v[i];
            v[i] = maior;
            s.push_back ({contador, i});
        }
    }
    cout<<swp<<endl;
    for (int i=0; i<s.size(); i++){
        cout<<s[i].first<<' '<<s[i].second << endl;
    }
}