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
    vector<ll> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());
    string s;
    ll x;
    while (q--){
        cin >> s;
        if(s == "binary_search"){
            cin >> x;
            if(binary_search(arr.begin() , arr.end() , x)){
                cout << "found" << '\n';
            } else {
                cout << "not found" << '\n';
            }
        } else if(s == "lower_bound"){
            cin >> x;
            ll t = lower_bound(arr.begin() , arr.end() , x) - arr.begin();
            if(t == arr.size()){
                cout << -1 << '\n';
            } else {
                cout << arr[t] << '\n';
            }
        } else if(s == "upper_bound"){
            cin >> x;
            ll t = upper_bound(arr.begin() , arr.end() , x) - arr.begin();
            if(t == arr.size()){
                cout << -1 << '\n';
            } else {
                cout << arr[t] << '\n';
            }
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
