#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, k; cin >> n >> k;
    unordered_map<ll, ll> freq;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll exp; cin >> exp;
        if (freq.count(k - exp) > 0) {
            ans += freq[k - exp];
        }
        freq[exp]++;
    }
    cout << ans;
}
