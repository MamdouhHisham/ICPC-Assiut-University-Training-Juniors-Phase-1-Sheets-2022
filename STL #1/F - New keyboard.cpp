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
    string s;
    while(cin>>s)
    {
        stack<char>st;
        deque<char>d;

        string x="";
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]=='[')
            {
                st.push(s[i]);
                for(auto h:x)d.push_front(h);
                x="";
                continue;
            }
            else if(s[i]==']')
            {
                st.push(s[i]);
                for(auto h:x)d.push_front(h);
                x="";
                continue;
            }

            if(st.size() && st.top()=='[')
            {
                x = s[i]+x;
            }
            else d.push_back(s[i]);

        }
        for(int i=x.size()-1;i>=0;i--) cout << x[i];
        for(auto &i:d)cout << i;
        cout << '\n';
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
