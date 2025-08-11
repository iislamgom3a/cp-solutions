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
    ll l1, r1, l2, r2, hi, mi;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1 < l2 && l1 < r2 || l2 < r1 && r2 < l1 && r2 < l1)
        cout << -1;
    else
    {
        if (r2 >= r1)
            hi = r1;
        else if (r2 <= r1)
            hi = r2;

        if (l2 >= l1)
            mi = l2;
        else if (l2 < l1)
            mi = l1;

        cout << mi << " " << hi;
    }
    return 0;
}
