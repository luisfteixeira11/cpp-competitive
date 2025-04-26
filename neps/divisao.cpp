#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b; cin>>a; cin>>b;
    double div = a/b;
    cout<< fixed <<setprecision(2)<<div<<endl;
    return 0;
}