#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int s , rs;
    cin >> s >> rs;
    string str;
    cin >> str;
    int a = 'a', b = 'z';
    for(int i = a; i <= b; i++)
    {
        for(int j = 0; j < s; j++)
        {
            if(rs == 0)
                break;
            if(str[j] == i)
            {
                str[j]=' ';
                rs--;
            }
        }
    }
    for(int i = 0; i < s; i++)
    {
        if(str[i] != ' ')
            cout << str[i];
    }
}
