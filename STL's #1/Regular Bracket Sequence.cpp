#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(st.size() == 0 || s[i] == '(')
            st.push(s[i]);
        else {
            if(st.top() == '(' && s[i] == ')'){
                st.pop();
                cnt++;
            }
        }
    }
    cout << cnt * 2;
}
