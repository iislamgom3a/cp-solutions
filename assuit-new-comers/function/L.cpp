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
    int n; cin >> n ;
    int ar1[n], ar2[n];
    for(int i = 0; i < n; i++) cin >> ar1[i];
    for(int i = 0; i < n; i++) cin >> ar2[i];
    for(int i=0; i<n; i++) cout << ar2[i] << sp ; 
    for(int i=0; i<n; i++) cout << ar1[i] << sp ; 
    return 0;
}