#include<iostream>
#include<vector>
#include<utility>
using namespace std;
//nao acertei ainda
int main(){
    int n;
    while(cin>>n){
        if (n==0){
            break;
        }
        vector<pair<int,int>> domino (n+2);
        int m; cin>>m;
        int j, k;
        cin>>j>>k;
        pair<int,int> pi (j, k);
        for (int i=0; i<m; i++){
            cin>>j>>k;
            pair<int,int> p;
        }
    }
    return 0;
}