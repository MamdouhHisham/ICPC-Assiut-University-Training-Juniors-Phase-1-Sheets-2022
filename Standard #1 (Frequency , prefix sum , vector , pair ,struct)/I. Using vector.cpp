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
    vector<ll> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    while (q--){
        string s; cin >> s;
        if(s == "pop_back"){
            arr.pop_back();
        } else if (s == "front"){
            cout << arr.front() << '\n';
        } else if (s == "back"){
            cout << arr.back() << '\n';
        } else if (s == "sort"){
            ll l , r; cin >> l >> r;
            l--;
            sort(arr.begin() + l , arr.begin() + r);
        } else if (s == "reverse"){
            ll l , r; cin >> l >> r;
            l--;
            reverse(arr.begin() + l , arr.begin() + r);
        } else if(s == "print"){
            ll pos; cin >> pos;
            cout << arr[pos - 1] << '\n';
        } else if(s == "push_back"){
            ll x; cin >> x;
            arr.push_back(x);
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
