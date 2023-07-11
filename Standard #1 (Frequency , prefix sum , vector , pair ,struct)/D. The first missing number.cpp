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
    ll n , m; cin >> n >> m;
    vector<ll> arr , freq(1e6 , 0);
    for(int i = 0 ; i < n ; i++) {
        ll x; cin >> x;
        arr.push_back(x);
        freq[arr[i] + 1e5]++;
    }
    for(int i = -m + 1e5 ; i <= m + 1e5 ; i++){
        if(freq[i] == 0) {
            cout << i - 1e5;
            return;
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
