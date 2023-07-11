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
    string str , s;
    cin >> str;
    while (q--){
        cin >> s;
        if(s == "pop_back"){
            str.pop_back();
        } else if(s == "front"){
            cout << str.front() << '\n';
        } else if (s == "back"){
            cout << str.back() << '\n';
        } else if (s == "sort"){
            ll l , r;
            cin >> l >> r;
            sort(str.begin() + min(l , r) - 1 , str.begin() + max(l , r));
        } else if(s == "reverse"){
            ll l , r;
            cin >> l >> r;
            reverse(str.begin() + min(l , r) - 1, str.begin() + max(l , r));
        } else if(s == "print"){
            ll pos;
            cin >> pos;
            cout << str[pos - 1] << '\n';
        } else if(s == "substr"){
            ll l , r;
            cin >> l >> r;
            for(int i = min(l , r) - 1 ; i <= max(l , r) - 1; i++){
                cout << str[i];
            }
            cout << '\n';
        } else if(s == "push_back"){
            char x;
            cin >> x;
            str.push_back(x);
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
