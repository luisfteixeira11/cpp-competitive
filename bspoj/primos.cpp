#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    if (n==2){
        cout<<"sim"<<endl;
        return 0;
    }
    if (n%2==0){
        cout<<"nao"<<endl;
        return 0;
    }
    for (int i=3; i*i<=n; i+=2){ //crivo de eratostenes (i*i)
        if (n%i==0){
            cout<<"nao"<<endl;
            return 0;
        }
    }
    cout<<"sim"<<endl;
    return 0;
}