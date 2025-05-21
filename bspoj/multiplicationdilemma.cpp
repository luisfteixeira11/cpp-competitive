#include <iostream>
#include <string>
using namespace std;

int digitos(string a){
    return a.size();
}

int main(){
    int t; cin>>t;
    for (int i=0; i<t; i++){
        int a, b; cin>>a>>b;
        string copiaa = to_string(a);
        string copiab = to_string(b);
        string retiradoa;
        string retiradob;
        for(int i=digitos(copiaa)-1; i>=0; i--){
            retiradoa.push_back(copiaa[i]);
            copiaa [i] = '0';
            if(copiaa[i]!='0'){
                break;
            }
        }
        for(int i=digitos(copiab)-1; i>=0; i--){
            retiradob [i] = copiab[i];
            copiab [i] = '0';
            if(copiab[i]!='0'){
                break;
            }
        }
        printf("%d x %d - %d x %d\n", &a, &retiradoa, &b, &retiradob);
    }
}