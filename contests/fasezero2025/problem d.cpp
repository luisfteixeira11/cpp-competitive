#include <bits/stdc++.h>
using namespace std;

double l(string t, int q) {
    
    double count = 0;
    
    for (int i = 0; i < q; i++) {
        if (t[i] == '*') {
            count++;
            
        }
    }
    
    return count;
}

int main(){
    int q; cin>>q;
    string t, n;
    cin>>t;
    cin>>n;
    
    double res1 = l(t, q);
    double res2 = l(n, q);
    
    double res = 1- (double) (res2 / res1);
    
    cout << fixed << setprecision(2) << res << endl;
    
    return 0;
}

/* ACERTAMO ESSA TB*/