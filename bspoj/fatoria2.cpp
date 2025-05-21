#include <iostream>
using namespace std;

int main(){
    int n, fator=1; cin>>n;
    while (n>1){
        fator *= n;
        n--;
    }
    cout<<fator<<endl;
}