#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,  swap=0, t; cin>>n;
    vector <int> v (n);
    vector <int> sortd (n);
    vector <int> s;
    
    for(int i=0; i<n; i++){
        cin>>t;
        v[i] = t; 
    }
    for (int i=n-1; i>=0; i--){
        int maior=0;
        int ind = 0;
        for (int j=0; j<n; j++){
            if (v[j]>maior){
                maior = v[j];
                ind = j;
            }
        }
        v[ind] = -1;
        sortd [i] = maior;
        swap++;
        s.push_back(ind);
        s.push_back(i);
    }
    cout<<swap<<endl;
    for (int i=0; i<s.size(); i+=2){
        cout<<s[i]<<' ';
        cout<<s[i+1]<<endl;
    }
}