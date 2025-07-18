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
    int k,s; cin >> k >> s;
    int pos =0; 
    for(int i=0;i<=k; i++){
        for(int j=0; j<=k; j++){
            int z = s -(i+j) ;
            if(z >= 0 && z<= k) pos++; 

        }
    }
    cout << pos << endl; 
    return 0;
}