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
    ll n , m;
    cin >> n >> m;
    map <ll , ll> mp;
    while (n--)
    {
        ll l , r;
        cin >> l >> r;
        mp[l] = r;
    }
    for(auto now = mp.begin();;)
    {
        auto next = now;
        next++;
        if(next == mp.end())
            break;
        if((now->second) >= (next->first)){
           now->second = max(now->second , next->second);
           mp.erase(next);
           now = mp.begin();
        } else {
            now++;
        }
    }
    ll q; cin >> q;
    while (q--)
    {
        ll u , v;
        cin >> u >> v;
        if(u > v)
            swap(u, v);
        auto it = mp.upper_bound(u);
        if(it == mp.begin())
        {
            cout << no << '\n';
            continue;
        }
        it--;
        if(it->second >= v)
            cout << ys << '\n';
        else
            cout << no << '\n';
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
