#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n, q;
    scanf("%d %d", &n, &q);
    long long v[n];
    for (int i=0; i<n; i++){
        scanf("%lld", &v[i]);
    }
    for (int i=0; i<q; i++){
        long long teste; scanf("%lld", &teste);
        long long low=0, high=n-1;
        long long mid, resultado =-1; 
        while (low<=high){
            mid = (low+high)/2;
            if (v[mid]<teste){
                low = mid+1;
            }else if (v[mid]>teste){
                high = mid-1;
            }else{
                resultado = mid;
                while (v[resultado-1] == v[resultado]){
                    resultado --;
                }
                break;
            }
        }
        printf("%lld\n", resultado);
    }
    return 0;
}