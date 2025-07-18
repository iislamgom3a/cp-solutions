#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int tt; cin >> tt;
    while(tt--){
        int n, k, p ; 
        cin >> n >> k >> p ;
        int op =0;  int x = p; k = abs(k);
        while(n){
            if (k == 0 ) break;
 
        cout << ((k == 0 ) ? op : -1 ) << endl ; 
    }
    return 0;   
}
