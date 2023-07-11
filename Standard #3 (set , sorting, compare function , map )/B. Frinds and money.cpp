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
    ll n , q;
    cin >> n >> q;
    map<string , ll> mp;
    string name;
    ll money;
    for(int i = 0 ; i < n ; i++){
        cin >> name >> money;
        mp[name] = money;
    }
    ll x , y;
    string s;
    while (q--){
        cin >> x;
        if(x == 1){
            cin >> s >> y;
            mp[s] += y;
        }
        else if(x == 2){
            cin >> s;
            cout << mp[s] << '\n';
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
