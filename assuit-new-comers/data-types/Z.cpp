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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    bool cond = b * log(a) > d * log(c);
    if (cond)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
