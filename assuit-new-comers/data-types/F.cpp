#include <bits/stdc++.h>
using namespace std;

#define fastio() \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cout.tie(nullptr)

typedef long long ll;

int main() {
    fastio();
    ll a, b;
    cin >> a >>b;
    cout << (a%10)+(b%10)<< endl;
    return 0;
}
