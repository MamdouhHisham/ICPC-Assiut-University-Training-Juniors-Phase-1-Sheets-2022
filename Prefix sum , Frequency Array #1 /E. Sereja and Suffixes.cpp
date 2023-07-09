#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n , m; cin >> n >> m;
    vector<long long> v(n , 0);
    set<long long> st;
    for(int i = 0 ; i < n ; i++)
        cin >> v[i];
    for(int i = n - 1 ; i >= 0 ; i--){
        st.insert(v[i]);
        v[i] = st.size();
    }
    while (m--){
        long long idx; cin >> idx;
        cout << v[idx - 1] << '\n';
    }
}
