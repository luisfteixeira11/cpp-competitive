#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool changedPermutation (vector<int>&v, int l, int r, int x){
    int count=0;
    x--;
    int antes = v[x];
    for (int i = l-1; i<=r-1;i++){
        if (v[i]<antes){
            count++;
        }
    }
    return count!=x-(l-1);
}

int main(){
    int n, m;cin>>n>>m;
    vector<int>pages(n);
    for (int a=0; a<n; a++){
        cin>>pages[a];
    }
    for (int i=0; i<m; i++){
        int l,r,x; cin>>l>>r>>x;
        if (changedPermutation(pages, l, r, x)==true){
            cout<<"No"<<endl;

        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}