#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> v(n);
    vector<int>index_zero;
    for(int i=0; i<n;i++){
        cin>>v[i];
        if (v[i]==0){
            index_zero.push_back(i);
        }
    }
    
    return 0;
}