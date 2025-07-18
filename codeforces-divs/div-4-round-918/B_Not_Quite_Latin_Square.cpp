#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int tt ; cin >> tt; 
    while(tt--){
        int x = 'A' + 'B' + 'C' ;
        x *= 3; 
        int sum = 0;  
        for(int i = 0; i < 9; i++){
            char c ; cin >> c ; 
            sum += c;
        }
    sum -= '?'; 
    cout << (char)(x - sum) << endl ;  
    }
    return 0;
}