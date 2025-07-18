#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int tt; cin >> tt; 
    while(tt--){
        int n; cin >> n ;
        string s; cin >> s; 
        int c1 =0, c2 =0 ; 
        for(int i=0 ;i<n; i++){
            if(s[i] == '-') c1 ++; 
            else if(s[i] == '_') c2 ++; 
        }
        if (c1 < 2 || c2 < 1) {
            cout << 0 << endl ;
            continue; 
        }
        else {
            ll a = int (c1 / 2), b = c1 - a; 
            ll  cnt = c2 * a * b; 
            cout << cnt << endl ;  
        }
        
    }
    return 0;
}