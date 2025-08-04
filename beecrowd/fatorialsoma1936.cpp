#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int c=0;
    while(n>0){
        int count=0, fat=1;
        while(fat<=n){
            count++;
            fat*=count;
        }
        fat/=count;
        n-=fat;
        c++;
    }
    cout<<c<<endl;
}