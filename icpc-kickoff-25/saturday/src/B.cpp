#include <cstdio>
#include <algorithm>

typedef long long ll;

ll lcm(ll a, ll b) {
    return a / std::__gcd(a, b) * b;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        ll n, m;
        scanf("%lld %lld", &n, &m);

        ll l = lcm(n, m);
        ll ans = (l / n) * (l / m);

        printf("%lld\n", ans);
    }
    return 0;
}
