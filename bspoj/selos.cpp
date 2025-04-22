#include <iostream>
using namespace std;

int main(){
    long long n; cin>>n;
    if (n%2==0){
        printf("S");
        return 0;
    }
    for (long long i=3; i*i<=n; i+=2){
        if (n%i==0){
            printf("S");
            return 0;
        }
    }
    printf("N");
    return 0;
}