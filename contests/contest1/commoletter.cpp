#include <bits/stdc++.h>
using namespace std;

string commonPermutation(string s1, string s2) {
    unordered_map<char, int> hashMap;
    
    
    string newString = "";
    if (s1==""||s2==""){
        return newString;
    }
    for (int i = 0; i < s1.size(); i++) {
        hashMap[s1[i]]++;
    }
    
    for (int i = 0; i < s2.size(); i++) {
        if (hashMap.find(s2[i]) != hashMap.end() && hashMap[s2[i]] != 0) {
            newString += s2[i];
            hashMap[s2[i]]--;
        }
    }
    
    sort(newString.begin(), newString.end());
    
    return newString;
}

int main() {
    
    
    string s1;
    string s2;
    
    while (cin) {
        cin >> s1;
      
        cin >> s2;
        
        cout << commonPermutation(s1, s2) << endl;
    }
    
    
    return 0;
}