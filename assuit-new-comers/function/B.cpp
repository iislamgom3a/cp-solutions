// B. Print

#include <bits/stdc++.h>
#define fastio()\
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long ll;
using namespace std;

void method(int n){
    for(int i=1; i<n; i++){
        cout << i << " ";
    }
    cout << n;
}
int main() {
    fastio();
    int n; cin >> n;
    method(n);
    return 0;
}
