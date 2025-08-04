#include <bits/stdc++.h>
using namespace std;

//wa

bool isPalidrome(string str) {
    int low = 0, high = str.size() - 1;
    
    while (low < high) {
        if (str[low] == str[high]) {
            low++;
            high--;
        } else {
            return false;
        }
    }
    
    return true;
}

bool isMirror(string str) {
    map<char, char> hashMap = {{'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'}, {'L', 'J'}, {'M', 'M'}, {'O', 'O'}, {'S', '2'}, {'T', 'T'}, {'U', 'U'}, {'V', 'V'}, {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'}, {'Z', '5'}, {'1', '1'}, {'2', 'S'}, {'5', 'Z'}, {'3', 'E'}, {'8', '8'}};
    
    string mirror = "";
    
    for (int i = str.size() - 1; i >= 0; i--) {
        if (hashMap.find(str[i]) != hashMap.end()) {
            if (hashMap[str[i]] == '0') {
                mirror += 'O';
            } else {
                mirror += hashMap[str[i]];
            }
            
        }
    }
    
    return mirror == str;
} 

bool mirrorPalindrome(string str) {
    return (isPalidrome(str) && isMirror(str));
}

int main() {
    string str;
    while (cin >> str) {
        if (mirrorPalindrome(str)) {
            cout << str << " -- is a mirrored palindrome." << endl;
        } else if (isMirror(str)) { 
            cout << str << " -- is a mirrored string." << endl;
        } else if (isPalidrome(str)) {
            cout << str << " -- is a regular palindrome." << endl;
        } else {
            cout << str << " -- is not a palindrome." << endl;
        }
        cout<<endl;
    }
    
    return 0;
}