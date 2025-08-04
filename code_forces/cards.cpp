#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int n; cin>>n;
    string s;
    cin>>s;
    vector <int> v;
    for (int i=0;i<n;i++){
        if (s[i] == 'n')
            v.push_back(1);
        else if (s[i] == 'z'){
            v.push_back(0);
        }
    }
    sort(v.begin(),v.end());
    for (int i=v.size()-1;i>=0;i--){
        cout << v[i] << " ";
    }
    cout << endl;

}