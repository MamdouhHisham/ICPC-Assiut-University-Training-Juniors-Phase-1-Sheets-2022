#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> v(n) , v2 ,fre(100005 , 0);
    long long mx = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        if(fre[v[i]] == 0){
            v2.push_back(v[i]);
        }
        fre[v[i]]++;
        mx = max(mx , fre[v[i]]);
    }
    sort(v2.begin() , v2.end());
    while (mx--){
        for(int i = 0 ; i < v2.size() ; i++){
            if(fre[v2[i]] > 0){
                cout << v2[i] << " ";
                fre[v2[i]]--;
            }
        }
        cout << '\n';
    }
}
