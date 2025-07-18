#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long ll;

int main() {
    fastio();
    #ifdef LOCAL 
    freopen("in.txt", "r", stdin);
    #endif
    string str; 
    getline(cin, str);
    bool flag = true; 
    ll len = str.size(); 
    ll ans = 1; 
    for(int i=1; i<len;  i++){
        if(isalpha(str[i])) {
            if(not flag) ans++; 
            flag = true; 
        }
        else flag = false; 
    }
    cout << ans << endl ; 
    return 0;
}

