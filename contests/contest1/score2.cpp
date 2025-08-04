#include <bits/stdc++.h>
using namespace std;

int Score(string score) {
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < score.size(); i++) {
        if (score[i] == 'O') {
            count++;
            sum += count;
        } else {
            count = 0;
        }
        
    }
    
    return sum;
}

int main () {
    int n;
    cin >> n;
    
    string score;
    for (int i = 0; i < n; i ++) {
        cin >>score;
        cout << Score(score) << endl;
    }
    
    return 0;
}