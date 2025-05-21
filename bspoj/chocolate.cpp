#include <iostream>
using namespace std;

int main(){
    int n, m; //bolinahs e bolinhas por pessoa
    cin>>n>>m;
    if (n<=m){
        cout<<"Paula"<<endl;
    } else if (n==m+1){
        cout<<"Carlos"<<endl;
    } 
    return 0;
}