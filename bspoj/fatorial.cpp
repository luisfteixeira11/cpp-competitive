#include <iostream>
using namespace std;

int fatorial(int n){
	long fat = 1;
        while (n>1){
            fat*=n;
            n--;
        }
    return fat;
}
 
int main(){
    long n, contador =1;
    while (cin>>n){
        cout<<"Instancia "<<contador<<endl;
        contador++;
        int fat = fatorial(n);
        while (fat%10==0) {
            fat /= 10;
        }
        int res = fat%10;
        cout<<res<<endl;
        cout<<endl;
    }
}