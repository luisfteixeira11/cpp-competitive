#include <iostream>
using namespace std;

int main(){
    int n, maior = -1;
    while (cin>>n){
        if (n==0){
            break;
        }
        if (n>maior){
            maior = n;
        }
    }
    cout<<maior<<endl;
    return 0;
}