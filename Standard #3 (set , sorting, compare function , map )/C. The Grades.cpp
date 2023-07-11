#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define int long long
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;
ll oo = 1e18;
string ys = "YES", no = "NO";

struct student{
    string name;
    ll arabic , math , science , english ,total = 0;
};

bool comp(student s , student b){
    if(abs(s.total - b.total) > 10){
        return s.total > b.total;
    }
    return s.name < b.name;
};

void solve() {
    ll n; cin >> n;
    student s[n];
    vector<student> arr;
    for(int i = 0 ; i < n ; i++){
        cin >> s[i].name >> s[i].arabic >> s[i].math >> s[i].science >> s[i].english;
        s[i].total = s[i].arabic + s[i].math + s[i].science + s[i].english;
    }
    sort(s ,s + n , comp);
    for(int i = 0 ; i < n ; i++){
        cout << s[i].name << " " << s[i].total << " " << s[i].arabic << " " << s[i].math << " " << s[i].science << " " << s[i].english << '\n';
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
