#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; getline(cin>>ws, s);
    int m, v[100001]; cin>>m;
    int count = 0;
    for(int i=1; i<s.size(); i++){
        if (s[i-1]==s[i]){
            count++;
        }
        v[i] = count;
    }
    while(m--){
        int a, b;cin>>a>>b;
        cout<<v[b-1]-v[a-1]<<'\n';
    }
    return 0;
}