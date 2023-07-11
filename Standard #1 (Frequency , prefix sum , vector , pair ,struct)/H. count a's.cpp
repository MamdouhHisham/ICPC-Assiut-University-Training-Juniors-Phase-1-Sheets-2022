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
    ll n = s.size();
    vector<int> prefix_sum(n+1);
    for (int i = 0; i < n; i++) {
        prefix_sum[i+1] = prefix_sum[i] + (s[i] == 'a');
    }
    ll q; cin >> q;
    while (q--) {
        ll l , r;
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l-1] << '\n';
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
