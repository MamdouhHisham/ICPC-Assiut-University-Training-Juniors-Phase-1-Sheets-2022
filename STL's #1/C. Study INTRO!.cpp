#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    stack<string> tags;
    long long cnt = 0;
    bool flag = true;
    while (n--){
        string s; cin >> s;
        if(flag && s != "Header"){
            cout << "WA" << '\n';
            return 0;
        }
        flag = false;
        if(s == "Header"){
            cnt++;
        }
        if(cnt > 1){
            cout << "WA" << '\n';
            return 0;
        }
        if(tags.empty()){
            tags.push(s);
        }
        else {
            if("End" + tags.top() == s){
                tags.pop();
            } else {
                tags.push(s);
            }
        }
    }
    if(tags.empty()){
        cout << "ACC" << '\n';
    } else {
        cout << "WA" << '\n';
    }
}
