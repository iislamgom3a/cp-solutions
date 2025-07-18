#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int tt; cin >> tt; 
    while(tt--){
        string s ; cin >> s ;
        for (char &c : s){
            c = tolower(c);
        }
        if(s == "yes") cout << "YES" << endl ; 
        else cout << "NO" << endl; 
    }
    return 0;
}