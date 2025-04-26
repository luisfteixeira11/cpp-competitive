#include <iostream>
using namespace std;

int main(){
    int n, i; cin>>n;
    bool l1=false, l2=false;
    for (int j=0; j<n; j++){
        cin>>i;
        if (i==1){
            l1 = !l1;
        } else{
            l1 = !l1;
            l2 = !l2;
        }
    }
    if (l1){
        cout<<1<<endl;
    } else{
        cout<<0<<endl;
    } if (l2){
        cout<<1<<endl;
    } else{
        cout<<0<<endl;
    }
    return 0;
}