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
    map<string , ll> mp;
    vector<string> chat;
    for(int i = 0 ; i < n ; i++){
        string temp; cin >> temp;
        chat.push_back(temp);
    }
    for(int i = chat.size() - 1 ; i >= 0 ; i--){
        if(mp[chat[i]] == 0){
            cout << chat[i] << '\n';
        }
        mp[chat[i]] = 1;
    }
}

int32_t main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    int t = 1; //cin >> t;
    while (t--) { solve(); }
}
