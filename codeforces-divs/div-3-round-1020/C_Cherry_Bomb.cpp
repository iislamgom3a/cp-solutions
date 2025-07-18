// NOT SOLVED 
// -------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;
void solve(int n, int k, int a[], int b[]){
   int zcnt =0;
   int sum[n];  
   for(int i=0;i<n;i++){
        if(b[i] == -1 ) zcnt++;
        if(b[i] == -1 ) {
            sum[i] = 0 ; 
        }
        else if(b[i] != -1) {
            sum[i] = a[i] +b[i];
        }
    }     
    if((n - zcnt) >= 1 && zcnt < n){
        for(int i=0 ;i<n; i++){
            if(b[i] == 0 && (*max_element(sum, sum+n) - a[i]) >= k){
               cout << 0 << endl ;
               return; 
            }
            else {
                cout << 1 << endl ; 
                return ; 
            }  
        } 
    } 
    else if (zcnt == n){
        cout << ((k - *max_element(a, a+n)) -1) / 2 ; 
    }
}

int main(){
    fastio();
    int tt; cin >> tt; 
    while(tt--){
        int  n, k ; cin >> n >> k; 
        int a[n], b[n]; 
        for(int i=0 ;i<n; i++){
            cin >> a[i]; 
        }
        for(int i=0 ;i<n; i++){
            cin >> b[i]; 
        }
        solve(n, k , a, b); 
    }
    return 0;
}