#include <iostream>
using namespace std;

int main(){
    int l, n, resultado; cin>>l>>n;
    int conta1 = n-1;
    resultado = (l-conta1)*(l-conta1)+conta1;
    cout<<resultado;
    return 0;
}