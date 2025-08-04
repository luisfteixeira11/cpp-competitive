#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& vet, int s, int q, int f) {
    int sizeA = q - s + 1;
    int sizeB = f - (q + 1) + 1;
    int i, j = 0, k = 0;
    
    vector<int> A(sizeA);
    vector<int> B(sizeB);
    
    for (i = s; i <= q; i++) {
        A[j] = vet[i];
        j++;
    }
    
    for (i = q + 1; i <= f; i++) {
        B[k] = vet[i];
        k++;
    }
    
    j = 0;
    k = 0;
    i = s;
    
    while(j < sizeA && k < sizeB) {
        if (A[j] < B[k]) {
            vet[i] = A[j];
            j++;
            
        } else {
            vet[i] = B[k];
            k++;

        }
        
        i++;
    }
    
    for (; j < sizeA; j++) {
    
        vet[i] = A[j];
        i++;
    }
    
    for(; k < sizeB; k++) {
        vet[i] = B[k];
        i++;
    }
    
}

void mergeSort(vector<int>& vet, int s, int f) {
    if (s < f) {
        int q = (s + f) / 2;
        mergeSort(vet, s, q);
        mergeSort(vet, q + 1, f);
        merge(vet, s, q, f);
    }
}

int main(){
    int n;

    cin >> n;
    
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector<int> vet (n);
        for (int i =0; i < n; i++) {
            cin >> vet[i];
        }
        
        mergeSort(vet, 0, n-1);
        
        for (int i = 0; i < n; i++) {
            cout << vet[i] << " ";
        }
        cout<<endl;
    }
    
    return 0;
}