#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define sp ' ' 

typedef long long ll;

int main() {
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    int t; cin >> t; 
    while(t--){
        ll a, b, m ; cin >> a>> b >> m ; 
        ll p = lcm(a, b);
        ll st = p; 
        ll end = st+m ; 
        ll max = 0; 
        max += ((end-st) / a) + 1; 
        max += ((end-st)/ b) + 1;
        cout << max << endl; 
    }
    return 0;
}


