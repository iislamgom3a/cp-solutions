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
    ll a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    switch (s)
    {
    case '+':
        if (a + b == c)
            cout << "Yes";
        else
            cout << a + b;
        break;

    case '-':
        if (a - b == c)
            cout << "Yes";
        else
            cout << a - b;
        break;

    case '*':
        if (a * b == c)
            cout << "Yes";
        else
            cout << a * b;
        break;

    default:
        break;
    }
    return 0;
}
