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
    vector<ll> a(n);
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        ll temp; cin >> temp;
        a[i] -= temp;
    }
    sort(all(a));
    ll ans = 0;
    for(int i = 0 , j = n ; i < n ; i++){
        while (j > 0 && a[i] + a[j - 1] > 0)
            j--;
        ans += n - max(i + 1 , j);
    }
    cout << ans;
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
