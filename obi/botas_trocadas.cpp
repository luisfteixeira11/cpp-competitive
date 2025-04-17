#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, contar=0; cin>>n;
    vector<int>bota_dir (61);
    vector<int>bota_esq (61);
    for (int i=0; i<n; i++){
        int num; cin>>num; char s; cin>>s;
        if (s == 'D'){
            bota_dir[num]++;
        }
        else{
            bota_esq[num]++;
        }
    }

    for (int i=30; i<61; i++){
        if (bota_dir[i] <= bota_esq[i]){
                contar+=bota_dir[i];
        }  
        else{
            contar += bota_esq[i];
        }
    }      
    
    cout<<contar<<endl;
    return 0;
}