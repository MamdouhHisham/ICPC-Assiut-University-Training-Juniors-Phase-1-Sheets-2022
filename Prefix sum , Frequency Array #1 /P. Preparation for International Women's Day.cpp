#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, k; cin >> n >> k;
    vector<int> v(n) , cnt(k);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        cnt[v[i] % k]++;
    }

    ll ans = cnt[0] / 2 * 2;
    for (int i = 1; i <= k / 2; i++) {
        if (i != k - i) {
            ans += min(cnt[i], cnt[k-i]) * 2;
        } else {
            ans += cnt[i] / 2 * 2;
        }
    }

    cout << ans << '\n';
}
