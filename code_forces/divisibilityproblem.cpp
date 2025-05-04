#include <iostream>
using namespace std;

int main(){
    int t, a, b; cin>>t;
    for (int i=0; i<t; i++){
        int moves=0;
        cin>>a>>b;
        if (a<b){
            moves = b-a;
            cout<<moves<<endl;
            continue;
        }else{
            int resto = a%b;
            if (resto==0){
                cout<<moves<<endl;
                continue;
            }
            moves = b-resto;
            cout<<moves<<endl;
        }
    }
    return 0;
}