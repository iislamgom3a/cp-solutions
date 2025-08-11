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
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    int product = (A * B) % 100;
    product = (product * C) % 100;
    product = (product * D) % 100;

    if (product == 0)
        cout << "00";
    else if (product < 10)
        cout << 0 << product;
    else
        cout << product << endl;
    return 0;
}
