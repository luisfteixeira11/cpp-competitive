#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<vector<int>> plant (n, vector<int>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>> plant[i][j];
        }
    }
    int q, colheu=0; cin>>q;
    for (int i=0; i<q; i++){
        int li, ci, lf, cf; cin>>li>>ci>>lf>>cf;
        for (int j=ci-1; j<cf; j++){
            for (int k=li-1; k<lf; k++){
                colheu +=  plant [k][j];
                plant [k][j] = 0;
            }
        }
    }
    printf("%d", colheu);
}