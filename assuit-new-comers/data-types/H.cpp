#include <bits/stdc++.h>
using namespace std;

#define fastio() \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cout.tie(nullptr)

typedef long long ll;

int main() {
    fastio();
    cout << "YES" <
    double a, b;
    cin >> a >>b;
    double reslut = a/b;
    cout << "floor "<<a <<" / "<<b<<" = " <<floor(reslut)<<endl;
    cout << "ceil "<<a <<" / "<<b<<" = " <<ceil(reslut)<<endl;
    cout << "round "<<a <<" / "<<b<<" = " <<round(reslut);
    return 0;
}
