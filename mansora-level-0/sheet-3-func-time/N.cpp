#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define sp ' ' 

typedef long long ll;
struct point {
    ll x, y ; 
};
struct rec{
    point p1, p2, p3, p4;
    ll idx ; 
    ll area(){
        ll l = max({p1.x, p2.x, p3.x, p4.x}) - min({p1.x, p2.x, p3.x, p4.x});
        ll w = max({p1.y, p2.y, p3.y, p4.y}) - min({p1.y, p2.y, p3.y, p4.y});
        return l * w ;
    }
};

bool comp(rec& r1, rec& r2){
    ll area1 = r1.area();
    ll area2 = r2.area();
    if(area1 < area2)  return true; 
    return false; 
} 
int main() {
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    ll n ;cin >> n;
    rec arr[n]; 
    for(int i=0;i <n;i++){
        cin >> arr[i].p1.x >> arr[i].p1.y; 
        cin >> arr[i].p2.x >> arr[i].p2.y; 
        cin >> arr[i].p3.x >> arr[i].p3.y; 
        cin >> arr[i].p4.x >> arr[i].p4.y; 
        arr[i].idx = i+1 ; 
    }
    sort(arr, arr+n, comp); 
    for(int i=0 ;i<n;i++){
        cout << arr[i].idx << sp << arr[i].area() << endl; 
    }
    return 0;
}