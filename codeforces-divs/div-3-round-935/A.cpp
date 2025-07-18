#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define sp ' ' 

typedef long long ll;
int solve(int a, int b, int c){
    int cnt =0; 
    cnt += a;
    int needed = (3 - (b % 3)) % 3;
    if (c < needed) return -1;
    b += needed; c-= needed; 
    cnt += b/3; 
    cnt += c/3 + (c%3 != 0); 
    return cnt; 
}
int main() {
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    int tt; cin >> tt; 
    while(tt--){
        int a, b, c; cin >> a >> b >> c; 
        cout << solve(a, b, c) << endl; 
    } 
    return 0;
}