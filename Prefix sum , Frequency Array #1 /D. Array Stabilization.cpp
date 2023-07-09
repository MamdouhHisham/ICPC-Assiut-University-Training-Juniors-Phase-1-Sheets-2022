#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    sort(v.begin() , v.end());
    cout << min(v[n - 1] - v[1] , v[n - 2] - v[0]);
}
