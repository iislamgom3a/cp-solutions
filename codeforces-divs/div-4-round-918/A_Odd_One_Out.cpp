#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int tt; cin >> tt; 
    while(tt--){
        int a, b, c; cin >> a >> b >> c ; 
        if(a == b) cout << c << endl ;
        else if (a == c ) cout << b << endl ; 
        else cout << a << endl ; 
    }
    return 0;
}