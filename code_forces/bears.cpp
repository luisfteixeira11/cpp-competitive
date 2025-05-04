#include <iostream>
using namespace std;

int main(){
    int a, b, years=0; cin>> a >> b;
    while (b>=a){
        b*=2;
        a*=3;
        years++;
        if (a>b){
            break;
        }
    }
    cout<<years<<endl;
    return 0;
}