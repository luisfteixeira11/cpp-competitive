#include <iostream>
#include<vector>
using namespace std;
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int n, d; 
    while(cin>>n>>d && n!=0){//allumni, dinner = linha, coluna
        vector<vector<int>> planilha (d, vector<int>(n)); 
        bool ja_printou = false;
        for(int dia=0; dia<n; dia++){
            for(int i=0; i<d; i++){
                cin>>planilha[i][dia];
            }
        }
        for(int i=0; i<n; i++){
            int contar_jantar = 0;
            for(int dia=0; dia<d; dia++){
                if (planilha[dia][i] == 1){
                contar_jantar++;
                }
            }
            if (contar_jantar==d){
                cout<<"yes"<<endl;
                ja_printou = true;
                break;
            }
        }
        if(!ja_printou){
            cout<<"no"<<endl;
        }
    }
        
    return 0;
}