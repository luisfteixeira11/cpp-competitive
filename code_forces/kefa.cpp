#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int seq = 1;
    int seqmax = 1;
    for (int i=1; i<n; i++){
        if (v[i-1]<=v[i]){
            seq++;
            if (seq>seqmax){
                seqmax = seq;
            }
        }
        else{
            seq = 1;
        }
    }
    cout<<seqmax<<endl;
    return 0;
}