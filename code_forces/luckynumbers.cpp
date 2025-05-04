#include <iostream>
#include <string>
using namespace std;

long long contdig (long long int n){
    string t = to_string(n);
    
    return t.size();
}

int main (){
    long long n, contar=0; cin >> n;
    string s = to_string (n);
    bool sorte = true;
    for (long long i=0; i<s.size(); i++){
        if (s[i]=='7'||s[i]=='4'){
            contar++;
        }
    }
    
    string con = to_string(contar);
    for (long long i=0; i<contdig(contar); i++){
        if(con[i]=='7'||con[i]=='4'){
            continue;
        } else{
            sorte = false;
            break;
        }
    }

    if (sorte){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    return 0;
}