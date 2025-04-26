#include <iostream>
using namespace std;

int main(){
    int l, n, somaareas=0; cin>>l>>n;
    if (l==1){
        cout<<"1"<<endl;
        return 0;
    }
    if (l==2){
        cout<<"2"<<endl;
        return 0;
    }
    if (n%2!=0){
        somaareas += (l/2)*(l/2);
        n--;
    }
    for (int i=0;i<n; i+=2){
        somaareas +=(l-1)*(l-1);
        somaareas +=(1)*(1);
    }
    cout<<somaareas<<endl;
    return 0;
}