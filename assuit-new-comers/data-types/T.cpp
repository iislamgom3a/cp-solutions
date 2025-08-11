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
    ll a, b, c, max, min, mid;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        max = a;
        if (b >= c)
        {
            min = c;
            mid = b;
        }
        else
        {
            min = b;
            mid = c;
        }
    }
    else if (b >= a && b >= c)
    {
        max = b;
        if (a >= c)
        {
            min = c;
            mid = a;
        }
        else
        {
            min = a;
            mid = c;
        }
    }
    else if (c >= a && c >= b)
    {
        max = c;
        if (a >= b)
        {
            min = b;
            mid = a;
        }
        else
        {
            min = a;
            mid = b;
        }
    }
    printf("%lld\n%lld\n%lld\n\n", min, mid, max);
    printf("%lld\n%lld\n%lld\n", a, b, c);
    return 0;
}