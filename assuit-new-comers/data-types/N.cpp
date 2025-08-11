#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr)

typedef long long ll;

int main()
{
    fastio();
    char a;
    cin >> a;
    if (a >= 65 && a <= 90)
    {
        a += 32;
    }
    else
    {
        a -= 32;
    }
    cout << a;
    return 0;
}
