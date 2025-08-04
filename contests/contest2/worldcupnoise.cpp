#include<iostream>
using namespace std;
//wa
int main(){
    int n, m; cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Scenario #"<<i<<":"<<endl;
        cin>>m;
        int r = 1, ra = 0, cont =0;
        while (cont<=m){
            int temp = r;
            r = r+ra;
            ra = temp;
            cont++;
        }
        cout<<r<<endl<<endl;
        
    }
    return 0;
}