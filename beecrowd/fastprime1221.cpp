#include <iostream>
using namespace std;

int main(){
    int n, x; cin>>n;
    for (int i=0; i<n; i++){
        cin>>x;
        bool isPrime = true;
        if (x==2){
            cout<<"Prime"<<endl;
            continue;
        }
        if (x%2==0){
            cout<<"Not Prime"<<endl;
            continue;
        }
        for(int j=3; j*j<x; j+=2){ //criva
            if (x%j==0){
                cout<<"Not Prime"<<endl;
                isPrime = false;
                break;
            }
        }
        if (isPrime){
        cout<<"Prime"<<endl;
        }
    }
    return 0;
}