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
    ll n , q; cin >> n >> q;
    ll arr[n];
    vector<ll> v;
    map<ll , ll> m;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        if(!m[arr[i]]){
            v.push_back(arr[i]);
        }
        m[arr[i]]++;
    }
    sort(v.begin() , v.end());
    while (q--){
        ll num; cin >> num;
        ll idx = lower_bound(v.begin() , v.end() , num) - v.begin();
        if(m[num]){
            cout << idx << " " << v.size() - 1 - idx << '\n';
        } else {
            cout << idx << " " << v.size() - idx << '\n';
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
