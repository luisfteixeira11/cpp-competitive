#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    while (cin >> a&&a != 0) {
        vector<int> loop(a);
        for (int i=0;i<a; i++) {
            cin >> loop[i]; //input do loop
        }
        int picos = 0;
        for (int i=0; i<a; i++) {
            int ponto_passado = loop[(i+a-1)%a], ponto_seguinte = loop[(i+1)%a]; //o passado nao pode ser só um i-1
            // se o numero for menor ou menor que seus dois numeros vizinhos, esse ponto é um pico máximo ou mínimo
            if ((loop[i]>ponto_passado && loop[i]>ponto_seguinte) || (loop[i]<ponto_passado && loop[i]<ponto_seguinte)) {
                picos++;
            }
        }
        cout<<picos<<endl;
    }
    return 0;
}