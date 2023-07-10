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
    string s; cin >> s;
    stack<char> st;
    ll ans = 0;
    for(auto ch : s){
        if(st.size() == 0 || ch == '(') st.push(ch);
        else{
            if(st.top() == '(' && ch == ')'){
                st.pop();
                ans++;
            }
        }
    }
    cout << ans * 2;
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
