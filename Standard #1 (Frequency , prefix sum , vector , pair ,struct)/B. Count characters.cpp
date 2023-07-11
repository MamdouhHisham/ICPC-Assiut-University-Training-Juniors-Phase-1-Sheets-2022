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
    string s; cin >> s;
    sort(s.begin() , s.end());
    vector<ll> arr(200 , 0);
    for (int i = 0; i < s.size(); ++i) {
        ++arr[s[i]];
        if(arr[s[i]] - 1 > 0)
        {
            s[i] = -1;
        }
    }
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] != -1) 
        { 
          cout << s[i] << " " << arr[s[i]] << '\n'; 
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
