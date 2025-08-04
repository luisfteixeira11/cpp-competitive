#include <iostream>
#include <vector>
using namespace std;
 
bool verfunc (vector <int> a, int na, int contem){
    for (int i=0;i<na;i++){
        if ((contem == a[i])){
            return true;
        }
    }
    return false;
}

int main (){
    int na; cin>>na;
    vector <int> a;
    for (int i=0;i<na;i++){
        int p;
        cin>>p;
        a.push_back (p);
    }
    int nb; cin>>nb;
    vector <int> b;
    for (int i=0;i<nb;i++){
        int p;
        cin>>p;
        b.push_back (p);
    }
    for (int i=0;i<na;i++){
        for (int j=0;j<nb;j++){
            int contem = a[i]+b[j];
            if ((verfunc(a, na, contem) == false)&&(verfunc(b,nb, contem) == false)){
                cout<<a[i]<<" "<<b[j]<<endl;
                return 0;
            }
        }
    }
    return 0;
}
