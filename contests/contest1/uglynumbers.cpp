#include <bits/stdc++.h>
using namespace std;

//wa

bool divisorprimodiferente(int num){
    for (int i=7; i*i<num; i+=2){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main () {
    int count = 11;
    int num = 16;
    
    
    while (count < 1500) {
        if ((num % 2 == 0) || (num % 3 == 0) || (num % 5 == 0)) {
            if (divisorprimodiferente(num)){
                count++;
            }
        }
        
        num++;
    }
    
    cout << num-1 << endl;
    
    return 0;
}