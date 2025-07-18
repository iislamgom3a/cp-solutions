#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define S " "
typedef long long ll;

const int MOD = 132120577;


int main(){
    fastio();
    int tt; cin >> tt; 
    while(tt--){
        int n ; cin >> n; 
        map <int , ll> frq; 
        int mx = 0; 
        for(int i=0; i<n; i++){
            int x;  cin >> x ;
            ll f ; cin >> f; 
            frq[x] = f ;
            mx = max(mx, x); 
        }
        vector<int> diff_cout (2 * mx + 5, 0 ); 
         for(auto it1 = frq.begin(); it1 != frq.end(); ++it1){
            for(auto it2 = it1; it2 != frq.end(); ++it2){
                int diff = abs(it1->first - it2->first);
                if(it1 == it2){
                    diff_cout[diff] = (diff_cout[diff] + (it1->first * (it1->first -1 )) /2 ) % MOD; 
                }
                else {
                    diff_cout[diff] = (diff_cout[diff] + it1->second * it2->second) % MOD ; 
                }
            }
         }
         for(int i=1; i < diff_cout.size(); i++){
            diff_cout[i] = (diff_cout[i] + diff_cout[i-1]) % MOD; 
         }
         int q; cin >> q; 
         while (q--){
            int l, r; cin >> l >> r; 
            ll ans ; 
            if(l == 0) ans = diff_cout[r];
            else ans = ( diff_cout[r] - diff_cout[l-1] ) % MOD; 
            cout << ans << endl ; 
         }
    }    
    return 0;
}






