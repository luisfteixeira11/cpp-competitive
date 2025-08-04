#include <iostream>
using namespace std;
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int n = 0;
    int teste = 0;
    while(cin>>n&&n!=0){
        teste++;
        cout<<"Teste "<<teste<<endl;
        int xs, ys, xi, yi, xsf=-1000, ysf=1000, xif=1000, yif=-1000;
        bool intersecta = xsf<xif&&ysf>yif;
        for (int i=0; i<n; i++){
            cin>>xs>>ys>>xi>>yi;
            if (xs>xsf){
                xsf = xs;
            }
            if (ys<ysf){
                ysf = ys;
            }
            if (xi<xif){
                xif = xi;
            }
            if (yi>yif){
                yif = yi;
            }
            
        }
        if(intersecta){
            cout<<xsf<<" "<<ysf<<" "<<xif<<" "<<yif<<endl;
        }else{
            cout<<"nenhum"<<endl;
        }
        cout<<endl;
    }
    return 0;
}