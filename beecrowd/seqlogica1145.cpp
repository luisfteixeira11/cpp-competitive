#include <iostream>
#include <vector>
using namespace std;

int main(){
    int l, c, contador=1; cin>>l>>c;
    vector <int> v (c);
    for (int i=0; i<c; i++){
        v[i] = contador;
        contador++;
        if (v[i]%l == 0){
            cout<<v[i]<<endl;
        } else{
            cout<<v[i]<<" ";
        }
    }
    return 0;
}