#include <bits/stdc++.h>
using namespace std;

int main(){
    int npart, budget, nhot, weeks, n=600000; cin >>npart>>budget>>nhot>>weeks;

    for (int i=0; i<nhot; i++){
        int prcperweek, total=0; cin >> prcperweek;
        bool canAccommodate = false;
    for (int a=0; a<weeks; a++){
        int bedsperweek; cin>>bedsperweek;
        if (bedsperweek >= npart) {
            canAccommodate = true;
        }
    }
    if (canAccommodate){
        int totais = prcperweek * npart;
        if (totais <=budget){
            n = min(n, totais);
        }
    }
    }
    if (n == 600000){
        cout<<"stay home"<<endl;
    } else{
        cout<<n<<endl;
    }
    return 0;
}