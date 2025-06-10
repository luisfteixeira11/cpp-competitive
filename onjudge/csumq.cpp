#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int q;cin>>q;
    for (int i=0; i<q; i++){
        int in, fim, sum=0; cin>>in>>fim;
        for (int j=in; j<=fim; j++){
            sum +=v[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}