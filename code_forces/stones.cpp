#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, cont=0; string s; cin>>n; cin>>s;
    for (int i=0; i<n-1; i++){
        if (s[i] == s[i+1]){
            cont++;
        }
    } 
    cout<<cont<<endl;
    return 0;
}