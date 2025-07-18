#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int tt; cin >> tt; 
    while(tt--){
        int len ; cin >> len ; 
        string str; cin >> str; 
        int frq [26] = {0};
        int cnt =0;  
        for(int i=0; i<len; i++){
            frq[str[i] -'A']++;
        }
        
        for(int i=0 ;i<26; i++){
            if(frq[i] != 0 ) {
                cnt +=2; 
                cnt += (frq[i] -1); 
            }  
        }
       cout << cnt << endl ; 

    }
    return 0;
}