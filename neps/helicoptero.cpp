#include <iostream>
using namespace std;

int main(){
    int h, p, f, d; cin>>h>>p>>f>>d;
    while (f!=p||f!=h){
        f+=d;
        if (f==16){
            f=0;
        } if (f==-1){
            f=15;
        }
        if (f==p){
            cout<<"N"<<endl;
            break;
        }else if(f==h){
            cout<<"S"<<endl;
            break;
        }
    }
    return 0;
}