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
void rec(int n){
    if(n == 0) return;  
    rec(n-1); 
    cout << n << endl ;
}
int main(){
    #ifndef LOCAL 
    freopen("in.txt", "r", stdin);
    #endif

    fastio();
    int n; cin >> n; 
    rec(n);
    return 0;
}


