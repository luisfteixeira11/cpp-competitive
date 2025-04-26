#include <iostream>
using namespace std;

int main (){
    int n, k, l, c, d, p, nl, np; cin>>n>>k>>l>>c>>d>>p>>nl>>np; //pra fazer um toast ele precisa de nl, np e um d
    int slicest = c*d;
    int ml = k*l;
    int mlt = ml/nl;
    int pt = p/np;
    int toasts = (min(pt, min(slicest, mlt)))/n;
    cout<<toasts<<endl;
    return 0;
}