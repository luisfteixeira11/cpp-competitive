#include<iostream>
#include<vector>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

cpp_int fatorial (int num){
    cpp_int fator = 1;
    for(int i=2; i<=num; i++){
        fator*=i; //overflow
    } 
    return fator;
}

cpp_int combinacao (int elementos, int set){
    return fatorial(elementos)/(fatorial(set)*fatorial(elementos-set));
}

int main(){
    int n, m; cin>>n>>m;
    vector<vector<int>> rectangle(n, vector<int> (m));
    int contar0coluna = 0, contar1coluna = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> rectangle[i][j];
        }
    }
    cpp_int setslinha = 0, setscoluna = 0;

    for (int i=0; i<n; i++) {
        int contar1linha = 0, contar0linha = 0;
        for (int j=0; j<m; j++) {
            if (rectangle[i][j] == 1) contar1linha++;
            else contar0linha++;
        }
        for (int a=2; a<=contar1linha; a++) {
            setslinha += combinacao(contar1linha, a);
        }
        for (int a=2; a<=contar0linha; a++) {
            setslinha += combinacao(contar0linha, a);
        }
    }

    for (int j=0; j<m; j++) {
        int contar1coluna = 0, contar0coluna = 0;
        for (int i=0; i<n; i++) {
            if (rectangle[i][j] == 1) contar1coluna++;
            else contar0coluna++;
        }
        for (int a=2; a<=contar1coluna; a++) {
            setscoluna += combinacao(contar1coluna, a);
        }
        for (int a=2; a<=contar0coluna; a++) {
            setscoluna += combinacao(contar0coluna, a);
        }
    }
    
    cout<<setslinha+setscoluna<<endl;
    //aqui faz o calculo da permutação
    return 0;
}