#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> v(n);
    map<long long , long long> mp;
    long long sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        mp[v[i]]++;
        sum += v[i];
    }

    long long good = 0;
    vector<long long> res;
    for(int i = 0 ; i < n; i++){
        sum -= v[i];
        mp[v[i]]--;
        if(sum % 2 == 0 && mp[sum / 2] > 0){
            good++;
            res.push_back(i);
        }
        sum += v[i];
        mp[v[i]]++;
    }
    cout << good << '\n';
    for(int i = 0 ; i < good ; i++){
        cout << res[i] + 1 << " ";
    }
}
