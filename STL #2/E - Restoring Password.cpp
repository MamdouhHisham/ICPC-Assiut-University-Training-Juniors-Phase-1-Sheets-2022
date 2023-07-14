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
   string s; cin >> s;
   map<string , ll> mp;
   for(int i = 0 ; i < 10 ; i++){
       string temp; cin >> temp;
       mp[temp] = i;
   }
   for(int i = 0 ; i < 80 ; i+= 10){
       cout << mp[s.substr(i , 10)];
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
