#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

long long search(long long ind,long long v [], int n){
    long long max = n-1;
    long long min = 0;
    long long med = (max+min)/2;
    
    while(min <= max){
        if (ind==v[med]){
            int i = med;
            while(v[i] == ind){
                i--;
            }
            return i+1;
        } else if(ind>v[med]){
            min = med+1;
        } else{
            max = med-1;
        }
        med = (max+min)/2;
    }
    return -1;
}

int main(){
    
    int n, q; scanf("%d %d", &n, &q);
    long long v [n];
    for (int i=0; i<n; i++){
        scanf("%lld", &v[i]);
    }

    for (int i=0; i<q; i++){
        long long ind; scanf("%lld", &ind);
        printf ("%lld\n", search(ind, v, n));
    }
    return 0;
}