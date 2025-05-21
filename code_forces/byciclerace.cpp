#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, perigo = 0; cin>>n;
    vector<pair<int, int>> pontos(n + 1);
    for (int i = 0; i <= n; i++) {
        cin >> pontos[i].first >> pontos[i].second;
    }

    
    for (int i = 1; i < n; i++) {
        int difx1=pontos[i].first - pontos[i-1].first;
        int dify1=pontos[i].second - pontos[i-1].second;
        int difx2=pontos[i+1].first - pontos[i].first;
        int dify2=pontos[i+1].second - pontos[i].second;
        if ((difx1 == 0 && difx2 != 0 && ((dify1 > 0 && difx2 < 0) || (dify1 < 0 && difx2 > 0))) || (dify1 == 0 && dify2 != 0 && ((difx1 > 0 && dify2 > 0) || (difx1 < 0 && dify2 < 0)))) {
            perigo++;
        }
    }
    cout << perigo << endl;
    return 0;
}
