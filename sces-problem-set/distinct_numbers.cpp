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
    int n; cin >> n;
    set<int> s; 
    for(int i=0; i<n;i++){
        int tmep; cin>>tmep; 
        s.insert(tmep); 
    }
    cout << s.size() << endl; 
    return 0;
}