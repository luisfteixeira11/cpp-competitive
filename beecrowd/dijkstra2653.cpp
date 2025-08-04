#include <iostream>
#include<map>
using namespace std;

int main(){
    string joia;
    map<string, bool> m;
    int count = 0;
    while(cin>>joia){
        if (m[joia]==false){
            m[joia] = true;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}