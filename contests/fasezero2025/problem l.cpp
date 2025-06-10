#include <bits/stdc++.h>
using namespace std;

int main(){
    double mega; cin>>mega;
    mega*=1000000;
    mega*=8;
    mega = log2(mega);
    cout << ceil(mega) << endl;
}

/* ACERTAMO */