#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define int long long
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;
ll oo = 1e18;
string ys = "YES", no = "NO";

void solve(){
    ll n; cin >> n;
    stack<string> tags;
    ll cnt = 0;
    bool flag = true;
    while (n--){
        string s; cin >> s;
        if(flag && s != "Header"){
            cout << "WA" << '\n';
            return;
        }
        flag = false;
        if(s == "Header"){
            cnt++;
        }
        if(cnt > 1){
            cout << "WA" << '\n';
            return;
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


int32_t main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    int t = 1; //cin >> t;
    while (t--) { solve();}
}
