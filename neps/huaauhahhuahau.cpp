#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool eh_palindromo(vector<char>vogais){
    vector<char> inverso (vogais.size());
    reverse_copy(vogais.begin(), vogais.end(), inverso.begin());
    for (int i=0; i<vogais.size();i++){
        if (vogais[i]!=inverso[i]){
            return false;
        }
    }
    return true;
}

//quer identificar se a sequencia de vogais é um palindromo

int main(){
    string s; cin>>s;
    vector<char>vogais;
    for (int i=0;i<s.size(); i++){
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vogais.push_back(s[i]);
        }
    }
    if (eh_palindromo(vogais)){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    return 0;
}