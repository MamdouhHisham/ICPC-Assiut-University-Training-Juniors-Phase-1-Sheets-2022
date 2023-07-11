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
    vector<pair<ll , ll>> v(n);
    ll l , r;
    bool ch = false;

    for(int i = 0 ; i < n ; i++){
        cin >> l >> r;
        v[i] = {min(l,r) , max(l,r)};
    }
    sort(all(v));
    ll x = v[0].first , y = v[0].second;
    for(int i = 1 ; i < n ; i++){
        if(v[i].first <= y){
            y = max(y , v[i].second);
            x = min(x , v[i].first);
        }
        else {
            cout << x << " " << y << '\n';
            x = v[i].first;
            y = v[i].second;
        }
    }
    cout << x << " " << y << '\n';
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
