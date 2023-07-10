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
    string sm, sa, sr;
    cin >> sm >> sa >> sr;
    ll turn = 0; // 0 for Muhammad, 1 for Ali, 2 for Rady
    reverse(all(sm));
    reverse(all(sa));
    reverse(all(sr));
    while (true) {
        if (turn == 0) {
            if (sm.empty()) {
                cout << "M" << '\n';
                break;
            }
            char temp = sm[sm.size() - 1];
            sm.pop_back();
            turn = (temp == 'm') ? 0 : (temp == 'a') ? 1 : 2;
        } else if (turn == 1) {
            if (sa.empty()) {
                cout << "A" << '\n';
                break;
            }
            char temp = sa[sa.size() - 1];
            sa.pop_back();
            turn = (temp == 'm') ? 0 : (temp == 'a') ? 1 : 2;
        } else {
            if (sr.empty()) {
                cout << "R" << '\n';
                break;
            }
            char temp = sr[sr.size() - 1];
            sr.pop_back();
            turn = (temp == 'm') ? 0 : (temp == 'a') ? 1 : 2;
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
