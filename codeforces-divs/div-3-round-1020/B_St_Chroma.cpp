#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    int tt; cin >> tt; 
    while(tt--){
        int n, x; cin >> n >> x ;
        if(n == 1 || n == 0 ) {
            cout << 0 <<endl ;
        }
        else if(n == x) {
            for(int i=0; i<n ;i++) {
                cout << i << " " ; 
            }
            cout << endl; 
        }
        else {

            int arr[n] ; 
            for(int i=0; i<n; i++){
                arr[i] = i; 
            }
            for (int i = 0; i < n; i++)
            {
                if(arr[i] == x) {}
                else cout << arr[i] << " "; 
            }
            cout << x << endl;
        }
        
    }
    return 0;
}