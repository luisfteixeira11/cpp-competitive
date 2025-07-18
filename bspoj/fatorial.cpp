#include <iostream>
#include <stdio.h>
using namespace std;

long long ultimodigito (long long n){
	long long fat = 1;
        for(long long i=2; i<=n; i++){
            fat*=i;
            while (fat%10==0){
                fat/=10;
            }
            fat %= 100000; //evita overflow pegando os primeiros digitos acabou
        }
    return fat%10;
}
 
int main(){
    long long n, contador =1;
    while (scanf("%lld", &n)!=EOF){
        printf("Instancia %lld\n", contador++);
        printf("%lld\n", ultimodigito(n));
        printf("\n");
    }
    return 0;
}