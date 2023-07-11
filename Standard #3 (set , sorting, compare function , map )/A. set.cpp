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
    set<ll> s;
    ll q; cin >> q;
    string st;
    while (q--){
        cin >> st;
        if(st == "insert"){
            ll x; cin >> x;
            s.insert(x);
        }
        else if (st == "find"){
            ll x; cin >> x;
            auto pos = s.find(x);
            if(pos != s.end()){
                cout << "found" << '\n';
            } else {
                cout << "not found" << '\n';
            }
        }
        else if(st == "lower_bound"){
            ll x; cin >> x;
            auto it = s.lower_bound(x);
            if(it != s.end()){
                cout << *it << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if(st == "upper_bound"){
            ll x; cin >> x;
            auto it = s.upper_bound(x);
            if(it != s.end()){
                cout << *it << '\n';
            }
            else {
                cout << -1 << '\n';
            }
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
