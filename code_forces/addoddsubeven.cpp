#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for (int i=0; i<n; i++){
        int a, b, m=0, odd=1, even=2; cin>>a>>b;
        int dist = a-b;
        if (dist<0){
            if (dist%2!=0){
                m = 1;
                printf("%d\n", m);

            }
            else{
                m = 2;
                printf("%d\n", m);

            }
            
        }else if (dist>0){
            if (dist%2==0){
                m = 1;
                printf("%d\n", m);

            }
            else{
                m = 2;
                printf("%d\n", m);
            }
        }else{
        printf("%d\n", m);
        }
    }
}