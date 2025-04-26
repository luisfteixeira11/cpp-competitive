#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    long double d, l, v1, v2; cin>>d; cin>>l; cin>>v1; cin>>v2; //long double para 10^-6
    long double time_alv = (l-d)/(v1+v2); //v se aproxima cada vez mais de luke
    cout<<setprecision(21)<<time_alv<<endl; //deixa a varivel com uma precisao de 20 casas decimais
    return 0;
}