#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    int n = 6789, contar = 1, premiado;
    while (n!=0){
        cin >> n;
        if (n==0){
            break;
        }
        int ingr;
        for (int i=1;i<n+1; i++){
            cin >> ingr;
            if (ingr == i){
                premiado = ingr;
            }
        }
        printf("Teste %d\n%d\n", contar, premiado);
        contar++;
    }
    return 0;
}