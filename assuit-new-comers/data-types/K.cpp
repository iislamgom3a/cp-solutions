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
    cin >> a >> b >> c;
    ll max = a, min = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    cout << min << " " << max << endl;
    return 0;
}
