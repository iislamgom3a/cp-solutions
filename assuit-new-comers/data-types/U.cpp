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
    float n;
    int nn;
    cin >> n;
    nn = n;
    float sub = n - nn;
    if (sub == 0)
        printf("int %d", nn);
    else
        printf("float %d %.3f", nn, sub);
    return 0;
}
