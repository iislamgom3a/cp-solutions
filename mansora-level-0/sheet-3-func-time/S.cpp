#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define sp ' ' 

typedef long long ll;

char low_char_cost(int cost[26], char st , char en){
    int co = 100000000; 
    char x = 'a';
    for(int i=0; i<26; i++){
        int nwcost = 0;  
        if(st != '0') nwcost += abs(cost[st -'a'] - cost[i]); 
        if(en != '0') nwcost += abs(cost[en -'a'] - cost[i]); 
        if(nwcost < co){
            co = nwcost ; 
            x = char('a'+i);
        }
    }
    return x; 
}
int main() {
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    string s; cin >> s; 
    int n = s.size();
    int cost[26];
    for(int i=0;i<26; i++){
        cin >> cost[i];
    }
    for(int i=0; i<n;i++){
        int temp = i ; 
        if (s[i] == '?'){
            int st = '0', en ='0'; 
            if(i != 0) {
                st = s[i-1];
            }
            while(s[i] == '?'){
                i++; 
                if(i == n ) break; 
            }
            if(i != n){
                en = s[i]; 
            }
            char x = low_char_cost(cost, st, en ); 
            for(int j=temp ; j<i;j++){
                s[j] = x; 
            }
        } 
    }

    ll ans = 0; 
    for(int i=1; i<n;i++){
        ans += abs(cost[s[i] - 'a'] - cost[s[i-1] - 'a']); 
    }
    cout << ans << endl << s << endl ;
    return 0;
}