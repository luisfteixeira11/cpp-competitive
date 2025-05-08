#include <iostream>
using namespace std;

int main(){
    int n, contador =1;
    while (cin>>n){
        cout<<"Instancia "<<contador<<endl;
        cout<<endl;
        contador++;
        int digito=10;
        int fat = 1;
        while (n<=1){
            fat*=n;
            n--;
        }
        while (fat%digito==0){
            digito*=10;
        }
        int res = fat%digito;
        cout<<res<<endl;
    }
}