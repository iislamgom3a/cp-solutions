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

void solve(int n, char c){
    for(int i=0; i<n-1;i++){
        cout << c << sp ; 
    }
    cout << c << endl;
}
int main(){
    fastio();
    int tt; cin >> tt; 
    while (tt--){
        int n; char c; 
        cin >> n >> c; 
        solve(n, c);
    }
    
    return 0;
}