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
    int a, b;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
    case '>':
        if (a > b)
            cout << "Right";
        else
            cout << "Wrong";
        break;

    case '<':
        if (a < b)
            cout << "Right";
        else
            cout << "Wrong";
        break;

    case '=':
        if (a == b)
            cout << "Right";
        else
            cout << "Wrong";
        break;
    default:
        break;
    }
    return 0;
}
