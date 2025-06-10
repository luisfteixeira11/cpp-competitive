#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    for (int i=0; i<n; i++){
        string s; cin>>s;
        if(s[s.size()-1]=='o'){
            cout<<"FILIPINO"<<endl;
        } else if(s[s.size()-1]=='u'){
            cout<<"JAPANESE"<<endl;
        } else if(s[s.size()-1]=='a'){
            cout<<"KOREAN"<<endl;
        }
    }
    return 0;
}