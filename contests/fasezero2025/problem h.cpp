#include <bits/stdc++.h>
using namespace std;

bool palindromo(string n) {
    int nint = n.size();
    int low = 0;
    int high = nint - 1;
    
    while(low < high) {
        if (n[low] != n[high]) {
            return false;
        }
        
        low++;
        high--;
    }
    
    return true;
}

string binario(int n) {
    string mod = "";
    int divisor = n;
    
    while(divisor != 1) {
        mod = to_string(divisor % 2) + mod;
        divisor = divisor / 2;
    }
    
    return "1" + mod;
}

int main(){
   long long n;
   cin >> n;
   
   bool isPalindromo = false;
   if (n%2 == 0){
           n--;
       }
   while (!isPalindromo) {
       string bin = binario(n);
       isPalindromo = palindromo(bin);
       n -= 2;
   }
   
   cout << n+2 << endl;
   
   return 0;
}

/* deu nao:( */