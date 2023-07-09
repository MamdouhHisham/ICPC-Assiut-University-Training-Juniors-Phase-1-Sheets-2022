#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string s; cin >> s;
    ll n = s.size();
    vector<ll> v(n + 1 , 0);
    for(int i = 1 ; i <= n ; i++){
        if(s[i - 1] == s[i]){
            v[i] = 1;
        }
        v[i] += v[i - 1];
    }
    ll q; cin >> q;
    while (q--){
        ll l , r; cin >> l >> r;
        cout << v[r - 1] - v[l - 1] << '\n';
    }
}
