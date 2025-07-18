#include <iostream>
#include <string>
#include <utility>
using namespace std;

//incompleto :/ falta acertar no teste 2

pair <bool, int> checar_spnumb(int a){
    int numero_final = 0, multiplicador = 1;
    while (to_string(a).size()>1){
        numero_final += (a%10)*multiplicador;
        if (a%10!=0){
            return {false, numero_final};
        }
        a/=10;
        multiplicador*=10;
    }
    return {true, numero_final};
}

int main(){
    int t; cin>>t;
    for (int i=0; i<t; i++){
        int a, b; cin>>a>>b;
        pair <bool, int> par_checado_a = checar_spnumb(a);
        pair <bool, int> par_checado_b = checar_spnumb(b);
        if (par_checado_a.first==false){
            a -= par_checado_a.second;
            cout<<a<<" x "<<b<<" + "<<par_checado_a.second<<" x "<<b<<endl;
        }else if (par_checado_b.first==false){
            b -= par_checado_b.second;
            cout<<b<<" x "<<a<<" + "<<par_checado_b.second<<" x "<<a<<endl;
        }
    }
    return 0;
}