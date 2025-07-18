#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif 
    int tt; cin >> tt; 
    while(tt--){
        int a,b ; cin >> a >> b; 
        if(a==b) cout << "YES\n" ; 
        else cout << "NO" << endl; 
    }
    return 0; 
}
