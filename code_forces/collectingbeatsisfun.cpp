#include<iostream>
#include<vector>
#include<string>
using namespace std;

int contar_numero(string numero, vector<vector<string>> m){
    int contar=0;
    for(int i=0; i<4;i++){
        for(int j=0; j<4; j++){
            if (m[j][i]==numero){
                contar++;
            }
        }
    }
    return contar;
}


int main(){
    int maximomao; cin>>maximomao; maximomao*=2;
    vector<vector<string>> m(4, vector<string>(4));
    for (int i=0; i<4; i++){
        string numero; cin>>numero;
        for(int j=0; j<4;j++){
            m[i][j] = numero[j];    
        }
        
        
    }
    for(int i=1; i<=9; i++){
        if(contar_numero(to_string(i), m)>maximomao){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}