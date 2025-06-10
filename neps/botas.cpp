#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n, pares=0; cin>>n;
    vector<int>direito(61);
    vector<int>esquerdo(61);
    for (int i=0; i<n; i++){
        int num; cin>>num; char l; cin>>l;
        if (l == 'D'){
            direito [num] += 1;
        }else if (l== 'E'){
            esquerdo[num] += 1;
        }
    }
    for (int i=30; i<=60; i++){
        if (direito[i] <= esquerdo[i]){
                pares+=direito[i];
        }  
        else{
            pares+=esquerdo[i];
        }
    }
    cout<<pares<<endl;
    return 0;
}