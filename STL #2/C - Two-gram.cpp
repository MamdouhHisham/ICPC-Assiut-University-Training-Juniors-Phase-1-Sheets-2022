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
    string s; cin >> s;
    map<string , ll> mp;
    string res = "0";
    for(int i = 0 ; i < n - 1 ; i++){
        string str;
        str = s.substr(i , 2);
        mp[str]++;
        if(mp[str] > mp[res])
            res = str;
    }
    cout << res;
}

int32_t main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    int t = 1; //cin >> t;
    while (t--) { solve(); }
}
