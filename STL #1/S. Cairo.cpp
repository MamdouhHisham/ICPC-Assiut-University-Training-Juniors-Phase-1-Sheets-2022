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
    ll n, x;
    cin >> n;
    queue<ll> q;
    stack<ll> st;
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }
    ll nxt = 1;
    while (!q.empty() || (!st.empty() && st.top() == nxt)) {
        if (!q.empty() && q.front() == nxt)
        {
            q.pop();
            nxt++;
        }
        else if (!st.empty() && st.top() == nxt)
        {
            st.pop();
            nxt++;
        }
        else if(!q.empty())
        {
            st.push(q.front());
            q.pop();
        }
    }
    cout << ((nxt == n + 1) ? ys : no);
    cout << '\n';
}

int32_t main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    int t = 1;
    cin >> t;
    while (t--) { solve(); }
}
