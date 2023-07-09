#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string s; cin >> s;
    vector<int> a(s.size() + 20), b(s.size() + 20);
    for (int i = 0; i < s.size(); i++)
    {
        a[i + 1] = a[i] + (s[i] == 'a');
        b[i + 1] = b[i] + (s[i] == 'b');
    }
    ll mx = 0;
    for (int i = 1; i <= s.size(); i++)
        for (int j = i; j <= s.size(); j++)
            mx = max (mx, a[i] + (a[s.size()] - a[j]) + (b[j] - b[i - 1]));
    cout << mx;
}
