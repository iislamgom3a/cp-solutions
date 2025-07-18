#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int n; cin >> n; 
    string str ; cin >> str; 
    int dobl =0; 
    for (int i =0; i < n; i++){
        if(str[i] == str[i+1]){
            dobl++;
        }    
    }
    cout << (n - dobl);  
    return 0;
}