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
    vector<ll> arr(n+1) , pre(n+2);
    for(int i = 1 ; i <= n; i++) {
        cin >> arr[i];
        pre[i] = 0;
    }
    while (q--){
        ll l , r , val; cin >> l >> r >> val;
        pre[l] += val;
        pre[r + 1] -= val;
    }
    for(int i = 1 ; i <= n; i++){
        pre[i] += pre[i-1];
    }
    for(int i = 1 ; i <= n ; i++){
        cout << arr[i] + pre[i] << " ";
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
