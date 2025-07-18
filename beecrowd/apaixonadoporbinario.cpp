#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long buscar_multiplo_binario (long long numero){
    vector <string> v;
    v.push_back ("1");
    while (v.size()!=0){
        string s = v.front(); v.erase(v.begin());
        long long bin = stoll (s);
        if (bin%numero==0){
            return bin;
        }
        if (s.size() < 19){
            v.push_back(s+"0");
            v.push_back(s+"1");
        }
    }
    return -1;
}

int main(){
    long long numero;
    while (cin>>numero){
        long long multiplo = buscar_multiplo_binario(numero);
        cout<<multiplo<<endl;
    }
    return 0;
}