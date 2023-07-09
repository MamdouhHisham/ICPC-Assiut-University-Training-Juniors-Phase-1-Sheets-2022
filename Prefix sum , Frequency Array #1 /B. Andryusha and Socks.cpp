#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> fre(n + 1 , 0);
    long long mx = INT_MIN , cur = 0;
    for(int i = 0 ; i < 2 * n ; i++){
        long long num; cin >> num;
        cur++;
        if(fre[num] == 1) cur -= 2;
        fre[num] = 1;
        mx = max(mx , cur);
    }
    cout << mx << '\n';
}

