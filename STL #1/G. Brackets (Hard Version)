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
   stack <char> st;
   for(int i = 0 ; i < s.size() ; i++){
       if(s[i] == '(' || s[i] == '{' || s[i] == '['){
           st.push(s[i]);
       } else {
           if(st.empty()){
               cout << "no";
               return;
           } else {
               if(s[i] == ')'){
                   if(st.top() == '('){
                       st.pop();
                   } else {
                       cout << "no";
                       return;
                   }
               } else if(s[i] == '}'){
                   if(st.top() == '{'){
                       st.pop();
                   } else {
                       cout << "no";
                       return;
                   }
               } else if(s[i] == ']'){
                   if(st.top() == '['){
                       st.pop();
                   } else {
                       cout << "no";
                       return;
                   }
               }
           }
       }
   }
   cout << (st.empty() ? ys : no);
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
