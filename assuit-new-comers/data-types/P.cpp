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
    ll number, digit;
    cin >> number;
    while (number != 0)
    {
        digit = number % 10;
        number /= 10;
    }
    if (digit % 2 == 1)
    {
        cout << "ODD";
    }
    else
        cout << "EVEN";
    return 0;
}
