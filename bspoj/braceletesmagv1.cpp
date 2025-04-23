#include <bits/stdc++.h>
using namespace std;

bool isPresent (string p, string b){
    int cont;
    for (int i=0; i<b.size();i++){
        cont=0;
        if (b[i] == p[0]){
            int x = i;
            for (int j=0; j<p.size();j++){
                if (b[x] != p[j]){
                    break;
                }
                cont++;
                x++;
            }
            if (cont==p.size()){
                break;
            }
        }
    }
    if (cont!=p.size()){
        reverse(b.begin(), b.end());
        for (int i=0; i<b.size();i++){
            cont = 0;
            if (b[i] == p[0]){
                int x = i;
                for (int j=0; j<p.size();j++){
                    if (b[x] != p[j]){
                        break;
                    }
                    cont++;
                    x++;
                }
                if (cont==p.size()){
                    break;
                }
            }
        }
    }
    if (cont==p.size()){
        return true;
    }
    return false;
}

int main(){
    int t; cin>>t;
    for (int i=0; i<t;i++){
        string p, b; cin>>p>>b;
        if (isPresent(p, b)){
            printf("S");
        } else{
            printf("N");
        }
    }
    return 0;
}