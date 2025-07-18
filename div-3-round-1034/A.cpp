#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define F first
#define S second
#define endl '\n'
#define sp ' ' 

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main(){
    fastio();
    int tt; 
    cin >> tt; 
    while(tt--){
        int n ; cin >> n ; 
        if((n-1) % 4 == 3 ) cout << "Bob" << endl; 
        else cout << "Alice" << endl;  

    }
    return 0;
}

num 2 -> 3 ? 
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
        int stro =0; 
        for(int i=0; i<n;i++){
            if(arr[i] > ply) stro ++; 
        }
        // cout << stro << sp ; 
        if(stro >= k ) cout << "NO" << endl; 
        else cout << "YES" << endl; 
    }
    return 0;
}








