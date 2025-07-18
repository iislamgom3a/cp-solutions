#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr)

typedef long long ll;

int main()
{
    fastio();
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '\\')
            break;
        cout << str[i];
    }
    return 0;
}
