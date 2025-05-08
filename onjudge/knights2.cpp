#include <iostream>
using namespace std;

int main(){
    int n, m, knights, i;
    while (cin >> n >> m && (m!= 0 || n != 0)){
        if (n>2 && m >2){
            knights = ((n*m)+1)/2;
        }

        if (n==1 || m ==1){
            if (n==1){
                knights = m;
            }
            if (m == 1){
                knights = n;
            }
        }
        if (n ==2 || m == 2){
            int maxi = max(m,n);
            i = 0;
            knights = 0;
        while(i<maxi){
            knights++;
            i++;
            if(i>=maxi){
                break;
            }
            knights++;
            i++;
            if(i>=maxi){
                break;
            }
            i++;
            if(i>=maxi){
                break;
            }
            i++;
        }
        knights += knights;
    }
    cout << knights << " knights may be placed on a " << n << " row " << m << " column board." << endl;
}
}