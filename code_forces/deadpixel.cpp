#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n; 
    for (int i=0; i<n;i++) {
        int v1, v2, x, y;
        cin>>v1>>v2>>x>>y;
        int areacima = x*v2;
        int areabaixo = ((v1-x)-1)*v2;
        int areaesq = v1*y;
        int areadir = v1*((v2-y)-1);
        int maiorarea = max({areacima, areabaixo, areaesq, areadir});
        cout<<maiorarea<<endl;
    }
    return 0;
}