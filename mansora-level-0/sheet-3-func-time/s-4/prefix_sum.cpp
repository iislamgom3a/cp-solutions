#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define sp ' ' 

typedef long long ll;

int arr[1000001]; 
int pre[1000001]; 
int main() {
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    // complexity : O(n+q)
    int n; cin >> n; 
    for(int i=1; i<=n ;i++){
        cin >> arr[i]; 
    }
    
    for(int i=1; i<=n;i++){
        pre[i] = pre[i-1] + arr[i];
    }
    int q; cin >> q; 
    while(q--)
    {
        int k ; cin >> k ; 
        cout << pre[k] << endl; 
    }
    return 0;
}
// pre:  [5 7 11 10 13]
// for l to r qurey: 
// ans = pre[r] - pre[l-1]