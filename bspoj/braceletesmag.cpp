#include<bits/stdc++.h>
using namespace std;

bool isPresent(string p, string b){
    bool isp = false;
    int cont=0, proib=0;
    for (int i=0; i<p.size(); i++){
        for (int j=0; j<b.size(); j++){
            if (p[i]==b[j]){
                cont=j;
                break;
            }
        }
        if (p[i]==b[cont]){
            if (proib!=p.size()){
                int x=0;
                for (int j=cont; j<p.size(); j++){
                    if (p[x]!=b[j]){
                        break;
                    }
                    x++;
                    proib++;
                }
            }
        }
            if (proib!=p.size()){
                int x=0;
                proib=0;
                reverse(b.begin(), b.end());
                for (int j=0; j<b.size(); j++){
                    if (p[x]==b[j]){
                        cont=j;
                        break;
                    }
                }
                for (int l=cont; l<p.size(); l++){
                    if (p[x]!=b[l]){
                        break;
                    }
                    x++;
                    proib++;
                }
            }
        }
        if (proib==p.size()){
            return true;
        }
    return false;
    }

int main(){
    int t; cin>>t;
    for (int i=0; i<t;i++){
        string p, b; cin>>p>>b;
        if (isPresent(p, b)==true){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}