#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define int long long
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;
ll oo = 1e18;
string ys = "YES", no = "NO";

bool comp(pair<string , ll> p1 , pair<string , ll> p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
};

void solve() {
    ll n; cin >> n;
    vector<pair<string , ll>>arr;
    for(int i = 0 ; i < n; i++){
        pair<string , ll>p;
        cin >> p.first >> p.second;
        arr.push_back(p);
    }
    sort(arr.begin() , arr.end() , comp);

    for(int i = 0 ; i < n; i++){
        cout << arr[i].first << " " << arr[i].second << '\n';
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
