#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define sp ' ' 

typedef long long ll;
int arr[100001];
ll frq[100001];
int main() {
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    int n, m; cin >> n >> m;
    for(int i=1; i<=n ;i++){
        cin >> arr[i]; 
    }
    for(int i=1; i<=n;i++){
        frq[arr[i]]++; 
    }
    for(int i=1; i<=m; i++){
        cout<< frq[i] << endl ; 
    }
    return 0;
}