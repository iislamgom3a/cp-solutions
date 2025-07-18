#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define F first
#define S second
#define endl '\n'
#define sp " "

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve(double arr[], int n ){
    cout << fixed << setprecision(6);
    double sum =0 ; 
    for(int i=0; i<n; i++){
        sum += arr[i] ; 
    }
    cout << sum / n  << endl; 
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    fastio();
    int n; cin >> n ;
    double arr[n]; 
    for(int i=0; i<n; i++) cin >> arr[i]; 
    solve(arr, n );
    return 0;
}