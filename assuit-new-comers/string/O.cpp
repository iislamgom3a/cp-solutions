#include <bits/stdc++.h>
using namespace std;
 
#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
 
typedef long long ll;
 
int main(){
    fastio();
    int n; cin >> n; 
    int frq[26] = {0}; 
    for(int i=0 ;i<n; i++){
        char ch ; cin >> ch ; 
        frq[ch - 'a']++; 
    }
    for(int i=0; i<26; i++){
        char ch = i + 'a'; 
        while(frq[i] != 0) {
            cout << ch; 
            frq[i]--; 
        }
    }
    return 0;
}
 