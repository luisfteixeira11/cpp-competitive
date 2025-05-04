#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int t; cin>>t;
    for (int k=0; k<t; k++){
        int n, m, count=0, countzero=0; cin>>n>>m; //linha e coluna
        string c;
        vector <vector<int>> v (n, vector<int> (m));
        for (int i=0;i<n; i++){
            cin>>c;
            for (int j=0;j<m;j++){
            v [i][j] = c[j];
            if (v[i][j]==48&(i==0||j==0||i==n-1||j==m-1)){
                count++;
            }
            if (v[i][j]==48){
                countzero++;
            }
            }
        }
        int imagemsemborda = (m*n)-(((m*2)-1)+((n*2)-3));
        if (countzero>imagemsemborda){
            cout<<-1<<endl;
        } else{
            cout<<count<<endl;
        }
    }
    return 0;
}