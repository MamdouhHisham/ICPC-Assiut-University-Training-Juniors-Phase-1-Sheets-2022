#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    getline(cin , s1);
    long long fre[10000] = {};
    for(int i = 0 ; i < s1.size() ; i++){
        if(s1[i] == ' ')
            continue;
        fre[s1[i]]++;
    }

    string s2;
    getline(cin , s2);
    for(int i = 0 ; i < s2.size() ; i++){
        if(s2[i] == ' ')
            continue;
        if(fre[s2[i]] == 0){
            cout << "NO";
            return 0;
        }
        fre[s2[i]]--;
    }
    cout << "YES";
}
