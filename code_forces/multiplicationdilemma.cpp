#include <iostream>
#include <string>
#include <utility>
using namespace std;

//utiliza conceito da propriedade distributiva

bool especial(int n){
    int x = abs(n);
    while(x%10==0&&(to_string(x).size()>1)){
        x/=10;
    }
    return (x>0 && x<10);
}

int main(){
    int t; cin>>t;
    for (int i=0; i<t; i++){
        int a, b; cin>>a>>b;
        
        if (especial(a)&&especial(b)){
            cout<<a<<" x "<<b<<endl;
        }else if (especial(a)){
            cout<<a<<" x "<<(b/10)*10 <<" + "<<a<<" x "<<b%10<<endl;
        }else if (especial(a)){
            cout<<(a/10)*10<<" x "<<b <<" + "<<a%10<<" x "<<b<<endl;
        }else{
            int ra = a%10;
            a -= ra;
            int rb = b%10;
            b-=rb;
            cout<<a<<" x "<<b<<" + "<< ra<<" x "<<b<<" + "<< a << " x "<< rb<<" + "<<ra<< " x "<<rb<<endl;
        }
    }
    return 0;
}
