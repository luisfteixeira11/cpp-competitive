#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n, acerto=0; cin>>n;
    string gabarito; cin>>gabarito;
    string prova; cin>>prova;
    for (int i=0; i<n; i++){
        if (gabarito[i]==prova[i]){
            acerto++;
        }
    }
    cout<<acerto<<endl;
    return 0;
}