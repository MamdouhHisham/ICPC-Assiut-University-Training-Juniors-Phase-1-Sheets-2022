#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    queue<long long> ids;
    while (n--){
        long long type , id;
        cin >> type >> id;
        if(type == 1){
            ids.push(id);
        }
        else {
            long long temp = ids.front();
            if(temp == id)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';

            ids.pop();
        }
    }
}
