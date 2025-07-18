#include<iostream>
#include<string>
using namespace std;

int main(){
    int contadorgrito = 0; 
    while (contadorgrito<3){
        string olhos;
        int numero = 0;
        while (cin>>olhos){
            if (olhos == "caw"){
                string grito;
                cin>>grito;
                cout<<numero<<endl;
                contadorgrito++;
                break;
            }
            if (olhos[0] == '*'){
                numero +=4;
            }
            if (olhos[1] == '*'){
                numero +=2;
            }
            if (olhos[2] == '*'){
                numero +=1;
            }
        }
    }
    return 0;
}