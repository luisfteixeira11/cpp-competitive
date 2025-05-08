#include <iostream>
#include <utility>
using namespace std;

int main(){
    int retx, rety; cin>>retx>>rety;
    int f1x, f1y; cin>>f1x>>f1y;
    int f2x, f2y; cin>>f2x>>f2y;
    int somax = max(f1x,f2x);
    int somay = f1y+f2y;
    for (int i=0; i<2; i++){
        if (somax<=retx){
            if(somay<=rety){
                cout<<"S"<<endl;
                return 0;
            }
        }
        int a = f1x; 
        f1x = f1y; 
        f1y = a;
        somax = max(f1x,f2x);
        somay = f1y+f2y;
        if (somax<=retx){
            if(somay<=rety){
                cout<<"S"<<endl;
                return 0;
            }
        }
        int b = f2x; 
        f2x = f2y; 
        f2y = b;
        somax = max(f1x,f2x);
        somay = f1y+f2y;
        if (somax<=retx){
            if(somay<=rety){
                cout<<"S"<<endl;
                return 0;
            }
        }
        int c = f1x; 
        f1x = f1y; 
        f1y = c;
        somax = max(f1x,f2x);
        somay = f1y+f2y;
        if (somax<=retx){
            if(somay<=rety){
                cout<<"S"<<endl;
                return 0;
                }
        }
    int temp = retx;
    retx = rety;
    rety = temp;
    }
    cout<<"N"<<endl;
    return 0;
}