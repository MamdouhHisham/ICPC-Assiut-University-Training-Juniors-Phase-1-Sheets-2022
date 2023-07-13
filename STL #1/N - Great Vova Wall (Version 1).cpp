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
    vector<ll> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        v[i] %= 2;
    }
    stack<ll> st;
    for(int i = 0 ; i < n; i++){
        if(st.size() != 0 && st.top() == v[i])
            st.pop();
        else
            st.push(v[i]);
    }
    cout << (st.size() <= 1 ? ys : no);
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
