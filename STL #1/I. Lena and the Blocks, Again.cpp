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
    vector<ll> v(n);
    ll mn = INT_MAX , mx = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        mx = max(mx , v[i]);
        mn = min(mn , v[i]);
    }
    ll ans = INT_MAX , idxMX = INT_MIN , idxMN = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(v[i] == mx){
            idxMX = i;
        }
        if(v[i] == mn){
            idxMN = i;
        }
        if(idxMX != INT_MIN && idxMN != INT_MAX){
            ans = min(ans , abs(idxMX - idxMN));
        }
    }
    cout << ans << '\n';
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
