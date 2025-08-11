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
    cin >> a >> b;
    if (a >= b)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
