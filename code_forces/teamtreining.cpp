#include <iostream>
using namespace std;

int main(){
    int xp, nb, count=0; cin>>xp>>nb;
    while (xp>0||nb>0){
        if (nb+xp<=2||xp==0||nb==0){
            break;
        }
        if (xp>nb){
            xp-=2;
            nb--;
            count++;
        } else{
            xp--;
            nb-=2;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}