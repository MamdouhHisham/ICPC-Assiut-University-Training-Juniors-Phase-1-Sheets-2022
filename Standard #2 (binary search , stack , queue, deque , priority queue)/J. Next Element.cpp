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
    ll n, q, x;
    cin >> n;
    vector<int>v(n);
    stack<int>st;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    st.push(0);
    for (int i = 1; i < n; i++) {
        while (!st.empty() && v[st.top()] < v[i])
            v[st.top()] = i + 1, st.pop();
        st.push(i);
    }
    while (!st.empty())
        v[st.top()] = -1, st.pop();
    cin >> q;
    while (q--) {
        cin >> x;
        cout << v[x - 1] << "\n";
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
