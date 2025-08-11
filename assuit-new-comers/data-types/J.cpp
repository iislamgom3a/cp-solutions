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
    ll a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
        cout << "Multiples";
    else
        cout << "No Multiples";
    return 0;
}
