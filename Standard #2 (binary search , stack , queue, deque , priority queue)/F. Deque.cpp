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
    deque<ll> q;
    while (n--) {
        string s; cin >> s;
        if(s == "push_back"){
            ll num; cin >> num;
            q.push_back(num);
        } else if(s == "push_front"){
            ll num; cin >> num;
            q.push_front(num);
        } else if(s == "pop_front"){
            q.pop_front();
        } else if (s == "pop_back"){
            q.pop_back();
        } else if(s == "front"){
            cout << q.front() << '\n';
        } else if(s == "back"){
            cout << q.back() << '\n';
        } else if(s == "print"){
            ll idx; cin >> idx;
            cout << q[idx - 1] << '\n';
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
