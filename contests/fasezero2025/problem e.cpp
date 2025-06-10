#include <bits/stdc++.h>
using namespace std;


int divisor(int x, int y){
    int alvo = sqrt(x);
    int mdc;

    if (x%2 == 0 && y%2 == 0){
        for (int i = alvo; i > 0; i--){
            if (x % i == 0 && y % i == 0){
                mdc = i;
                break;
            }
        }
    }
    else{
        if (alvo%2 == 0){
            alvo--;
        }
        for (int i = alvo; i > 0; i-=2){
            if (x % i == 0 && y % i == 0){
                mdc = i;
                break;
            }
        }
    }
    return mdc;
}

int main(){
    int y,k; cin>>y>>k;
    int x=1;
    int maxdiv=0;
    for(int j=0; j<k; j++){
        if (x>y && y%x==0){
            x+=x;
        } else if(x<y&&divisor(x, y)!=1){
            x+=divisor(x,y);
        }else{
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}
