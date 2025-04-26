#include <iostream>
using namespace std;

int main(){
    int p, r; cin>>p; cin>>r;
    if (p==0){
        cout<<"C"<<endl;
        return 0;
    }
    if (r==0){
        cout<<"B"<<endl;
        return 0;
    }
    cout<<"A"<<endl;
    return 0;
}