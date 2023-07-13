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
   deque<ll> de(n);
   set<ll> st;
   for(int i = 0 ; i < n ; i++)
       cin >> de[i];
   ll q; cin >> q;

   while (q--){
       string s; cin >> s;
       if(s == "L"){
           if(de.empty())
               continue;
           st.insert(de.front());
           de.pop_front();
       }
       else if(s == "R"){
           if(de.empty())
               continue;
           st.insert(de.back());
           de.pop_back();
       }
       else{
           if(st.empty())
               cout << -1 << '\n';
           else{
               auto it = st.end();
               it--;
               cout << *it << '\n';
               st.erase(it);
           }
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
    while (t--) { solve(); }
}
