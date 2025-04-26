#include <bits/stdc++.h>
using namespace std;

int casom2 (int m, int n){ //no caso de um deles ser dois, a forma que melhor resulta é usando uma forma de 2x2
    int knt = 0;
    vector<vector<int>> matriz(m, vector<int> (n));
    for (int i=0; i<m;i+=5){
        for (int j=0; j<n;j+=5){
            matriz [i][j]= 1;
            knt++;
            if (j!=n-1){
                matriz [i][j+1]= 1;
                knt ++;
            }
            if (i!=m-1){
                matriz [i+1][j]= 1;
                knt++;
                if (j!=n-1){
                    matriz [i+1][j+1]= 1;
                    knt ++;
                }
            }
        }
    }
    return knt;
}

int kng(int m, int n) {
    if (m>n){ // troca os dois
        int temp = m;
        m = n;
        n = temp;
    }
    if (m==1){
        return n; //se é um é ele ne
    }
    if (m==2) {
        return casom2(m,n);
    }
    return ((m*n)+1)/2; //casas do cavalo sao alternadas igual ao tabuleiro de xadrez normal
}

int main() {
    int m, n;
    while (cin>>m>>n) {
        if (m==0&&n==0){
            break;
        }
        int row = m;
        int col = n;
        int knights = kng(m, n);
        printf("%d knights may be placed on a %d row %d column board.\n", knights, row, col);
    }
    return 0;
}