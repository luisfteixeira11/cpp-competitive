#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool divisorescomuns(int n, int m) {
    return __gcd(n, m) != true;
}

int main(){
    int n; cin>>n;
    if (n%2==0){
        int a = (n/2)-1;
        int b = (n/2)+1;
        while (divisorescomuns(a, b)){
            a--;
            b++;
        }
        cout<<a<<" ";
        cout<<b<<endl;
        
    }else{
        cout<<n/2<<" ";
        cout<<(n/2)+1<<endl;
    }
    return 0;
}