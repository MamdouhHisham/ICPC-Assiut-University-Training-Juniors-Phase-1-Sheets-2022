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
    ll q; cin >> q;
    deque<ll> de;
    bool is_reversed;
    while (q--)
    {
        string s; cin >> s;
        if(s == "back")
        {
            if(de.empty())
                cout << "No job for Ada?" << '\n';
            else
            {
                if(is_reversed)
                {
                    cout << de.front() << '\n';
                    de.pop_front();
                }
                else
                {
                    cout << de.back() << '\n';
                    de.pop_back();
                }
            }
        } else if (s == "front")
        {
            if(de.empty())
                cout << "No job for Ada?" << '\n';
            else
            {
                if(is_reversed){
                    cout << de.back() << '\n';
                    de.pop_back();
                } else {
                    cout << de.front() << '\n';
                    de.pop_front();
                }
            }
        }
        else if (s == "reverse")
        {
            is_reversed = !is_reversed;
        }
        else if(s == "push_back")
        {
            ll n; cin >> n;
            if(is_reversed)
                de.push_front(n);
            else
                de.push_back(n);
        }
        else if(s == "toFront")
        {
            ll n; cin >> n;
            if(is_reversed)
                de.push_back(n);
            else
                de.push_front(n);
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
