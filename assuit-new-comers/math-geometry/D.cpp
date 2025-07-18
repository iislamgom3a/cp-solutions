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
    ll a, b, q;
    cin >> a >> b >> q; 
    q %= 3; 
    if(q==1){
        cout << a ; 
    } 
    else if(q == 2 ){
        cout << b; 
    }
    else cout << (a ^ b ); 
    return 0;
}



