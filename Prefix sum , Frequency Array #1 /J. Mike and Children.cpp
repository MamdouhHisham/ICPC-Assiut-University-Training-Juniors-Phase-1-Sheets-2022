#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> v(n + 1);
    for(int i = 1 ; i <= n ; i++)
        cin >> v[i];

    vector<long long> cnt(200005);
    for(int i = 1 ; i <= n ; i++){
        for(int j = i + 1 ; j <= n ; j++){
            cnt[v[i] + v[j]]++;
        }
    }
    long long ans = INT_MIN;
    for(int i = 1 ; i <= 200000 ; i++)
        ans = max(ans , cnt[i]);
    cout << ans;
}
