#include <iostream>
using namespace std;

int fib (int n){
    if(n<=1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n, numero; cin>>n;
    numero = fib (n);
    cout<<numero<<endl;
    return 0;
}