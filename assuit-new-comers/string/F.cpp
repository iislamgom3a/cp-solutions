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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll len = s.length();
        if (len <= 10)
            cout << s << endl;
        else
        {
            cout << s[0] << len - 2 << s[len - 1] << endl;
        }
    }
    return 0;
}
