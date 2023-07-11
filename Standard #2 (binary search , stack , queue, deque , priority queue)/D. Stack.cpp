#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define int long long
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;
ll oo = 1e18;
string ys = "YES", no = "NO";

void solve() {
    stack<ll> s;
    ll q;
    cin >> q;
    string ss;
    while (q--){
        ll x;
        cin >> ss;
        if(ss == "push"){
            cin >> x;
            s.push(x);
        } else if (ss == "pop"){
            s.pop();
        } else if(ss == "top"){
            cout << s.top() << '\n';
        }
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
