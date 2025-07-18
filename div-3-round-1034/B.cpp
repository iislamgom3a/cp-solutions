#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define sp ' '

typedef long long ll;
int main() {
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    int t; cin >> t; 
    while(t--) {
        int n, j, k; 
        cin >> n >> j >> k; 
        vector<int> arr(n); 
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ply = arr[j-1];  
        int max = *max_element(arr.begin(), arr.end()); 
        if(k == 1 && ply != max) cout << "NO" << endl; 
        else cout << "YES" << endl; 
    }
    return 0;
}

