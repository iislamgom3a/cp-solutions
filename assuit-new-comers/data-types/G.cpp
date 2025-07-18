#include <bits/stdc++.h>
using namespace std;

#define fastio() \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cout.tie(nullptr)

typedef long long ll;


int main() {
    fastio();
    ll n;
    cin >> n;
    cout << (n*n+n)/2;
    return 0;
}
