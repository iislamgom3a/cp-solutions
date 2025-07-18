#include <bits/stdc++.h>
using namespace std;

#define fastio() \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cout.tie(nullptr)

typedef long long ll;

int main() {
    fastio();
    ll a, b, c, d;
    cin >>a>>b>>c>>d;
    cout << "Difference = "<< (a*b)-(c*d);
    return 0;
}
