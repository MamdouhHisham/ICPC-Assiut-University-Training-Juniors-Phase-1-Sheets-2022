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
    ll n , q; cin >> n >> q;
    vector<ll> v(1e5 , 0);
    while (q--){
        pair<ll , ll> p;
        cin >> p.first >> p.second;
        if(p.first == 1) v[p.second]++;
        else if (p.first == 2) cout << v[p.second] << '\n';
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
