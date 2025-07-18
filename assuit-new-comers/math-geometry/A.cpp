#include <bits/stdc++.h>

using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    ll n; cin >> n; 
    while(n > 2){
        if (n % 2 != 0) {cout << "NO" << endl ; return 0; }
        n = n / 2; 
    }
    cout << "YES" << endl ; 
    return 0; 
}