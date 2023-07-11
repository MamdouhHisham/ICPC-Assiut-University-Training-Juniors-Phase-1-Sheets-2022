#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define int long long
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;
ll oo = 1e18;
string ys = "YES", no = "NO";

ll vis[101];

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<int>v;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (!vis[x])v.push_back(i);
        vis[x]++;
    }
    if (v.size() < k)cout << no << '\n';
    else {
        cout << ys << '\n';
        for (int i = 0; i < k; i++)cout << v[i] << " ";
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
