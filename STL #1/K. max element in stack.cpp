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
    stack<ll> st , stMAX;
    while (n--) {
        ll type , num;
        cin >> type;
        if(type == 1)
        {
            cin >> num;
            st.push(num);
            if(stMAX.empty() || stMAX.top() <= num)
            {
                stMAX.push(num);
            }
        }
        else
        {
            if(st.top() == stMAX.top())
            {
                stMAX.pop();
            }
            st.pop();
        }
        cout << stMAX.top() << '\n';
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
