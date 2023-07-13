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
    ll q, ans = 0, mx = ((int)1 << 32);
    cin >> q;
    stack<ll> st;
    st.push(1);
    while (q--)
    {
        string command;
        ll ctr;
        cin >> command;
        if (command == "for")
        {
            cin >> ctr;
            st.push(min(mx, st.top() * ctr));
        }
        else if (command == "end")
            st.pop();
        else
        {
            ans += st.top();
            if (ans >= mx)
            {
                cout << "OVERFLOW!!!";
                return;
            }
        }
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
