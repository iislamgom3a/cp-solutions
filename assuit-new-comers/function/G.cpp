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

void solve(int n , int arr[]){
    int min = INT_MAX, max = INT_MIN; 
    for(int i=0; i<n;i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    cout << min << sp << max; 
}
int main(){
    fastio();
    int n; cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    solve(n , arr);
    return 0;
}