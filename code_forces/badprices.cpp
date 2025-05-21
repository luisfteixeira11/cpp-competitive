#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    for (int j=0; j<t;j++){
        int n;cin>>n;
        int badprice = 0;
        vector <int> v (n);
        for (int i=0;i<n;i++){
            cin >> v[i];
        }
        int minprice = v[n-1];
        if (n==1){
            cout<<0<<endl;
            continue;
        }
        
        for (int i=n-2; i>=0;--i) {
            if (v[i] > minprice){
                badprice++;
            } else{
                minprice = v[i];
            }
        }
        cout<<badprice<<endl;
    }
    return 0;
}