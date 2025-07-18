#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int tt; cin >> tt; 
    while(tt--){
        int n; cin >> n; 
        string str; 
        cin >> str; 
        // cout << str << endl ; 
        int zcnt =0, ocnt =0; 
        for(int i=0; i<n; i++){
            if(str[i] == '0') zcnt++; 
            else ocnt++; 
        }
        cout << zcnt + (ocnt * n - ocnt) << endl ; 
    }
    return 0;
}