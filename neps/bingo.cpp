#include<iostream>
#include<vector>
#include <cstdlib>
using namespace std;

int main(){
    int n, b; //numero limite das bolas(numero limite da cartela) e numero de bolas no globo
    while(cin>>n>>b){
        if (n==0&&b==0){
            break;
        }
        vector<int>v (b);
        vector<int>vetor_0_ate_n (n+1, 0);
        bool ha_todos = true;
        for (int i=0; i<b;i++){
            cin>>v[i];
        }
        if (b==n+1){
            cout<<"Y"<<endl;
            continue;
        }
        for (int i=0; i<b;i++){
            for (int j=0;j<b;j++){
                int dif = abs(v[i]-v[j]);
                vetor_0_ate_n [dif] ++;
                
            }
        }
        for (int i=0; i<n+1; i++){
            if (vetor_0_ate_n[i] == 0){
                cout<<"N"<<endl;
                ha_todos = false;
            }
            if (!ha_todos){
                break;
            }
        }
        if (ha_todos){
            cout<<"Y"<<endl;
        }
        
    } 
    return 0;
}