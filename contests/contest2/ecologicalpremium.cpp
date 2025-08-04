#include<iostream>
#include<iomanip>
using namespace std;
//aceito
int main(){
    int c; cin>>c;
    for(int a=0; a<c; a++){
        float n, size, animals, ef, money=0; cin>>n;
        for (int i=0; i<n; i++){
            cin>>size>>animals>>ef;
            float sp = size/animals;
            money+=ef*animals*sp;
        }
        cout<<fixed<<setprecision(0)<<money<<endl;
    }
    return 0;
}