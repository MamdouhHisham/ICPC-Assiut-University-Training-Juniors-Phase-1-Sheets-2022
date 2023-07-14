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
    ll n; cin >> n;
    vector<ll> v(n);
    set<vector<ll>> st;
    for(int i = 0 ; i < n ; i++)
        cin >> v[i];
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            swap(v[i] , v[j]);
            st.insert(v);
            swap(v[i] , v[j]);
        }
    }
    cout << st.size() << '\n';
}

int32_t main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    int t = 1; cin >> t;
    while (t--) { solve(); }
}
