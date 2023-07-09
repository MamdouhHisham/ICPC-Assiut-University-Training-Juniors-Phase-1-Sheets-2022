#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n , k; cin >> n >> k;
    vector<ll> v(n);
    map<ll , ll> mp;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    if(k == 0 && (*mp.begin()).first != 1){
        cout << 1;
        return 0;
    }
    ll sum = 0;
    for(auto x : mp){
        sum += x.second;
        if(sum == k){
            cout << x.first;
            return 0;
        }
    }
    cout << -1;
}
