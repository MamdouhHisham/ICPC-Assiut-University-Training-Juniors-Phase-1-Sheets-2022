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
    ll n, k; cin >> n >> k;
    vector<ll> v , mx;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
        mx.push_back(x);
    }
    sort(mx.begin(), mx.end(), greater<int>());
    ll sum = 0;
    for (int i = 0; i < k; i++)
        sum += mx[i];
    cout << sum << "\n";

    ll cnt = 0;
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (v[i] == mx[j]) {
                res.push_back(i + 1);
                mx[j] = -1;
                cnt++;
                if (cnt == k)break;
                break;
            }
        }
        if (cnt == k)break;
    }
    ll last = 0;
    for (int i = 0; i < res.size() - 1; i++) {
        if (i == 0) {
            cout << res[i] << " ";
        } else {
            cout << res[i] - res[i - 1] << " ";
        }
        if (i == res.size() - 2)
          last = res[i];
    }
    cout << n - last;
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
