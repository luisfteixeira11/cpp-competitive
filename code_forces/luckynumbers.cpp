#include <iostream>
#include <string>
using namespace std;

long long contdig (long long int n){
    string t = to_string(n);
    
    return t.size();
}

int main (){
    long long n, contarluckdig; cin >> n;
    bool sorte = true;
    for (long long i=0; i<contdig(n); i++){
        if ((n%10!=7&&n%10!=4)||n==7||n==4){
            sorte = false;
            break;
        }
        n/=10;
        contarluckdig++;
    }
    if (sorte){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    return 0;
}