#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define int long long
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;
ll oo = 1e18;
string ys = "YES", no = "NO";

void solve(){
    ll n; cin >> n;
    queue<ll> ids;
    while (n--){
        ll type , id;
        cin >> type >> id;
        if(type == 1){
            ids.push(id);
        }
        else {
            ll temp = ids.front();
            if(temp == id)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';

            ids.pop();
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
