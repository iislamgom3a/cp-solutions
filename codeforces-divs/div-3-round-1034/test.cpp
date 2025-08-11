#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define sp ' ' 

typedef long long ll;
int chartoindex(string s, int idx){
    return (s[idx] - 'a'); 

}
int main() {
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    string str; cin >> str; 
    int freq[26] = {0}; 
    for(int i=0;i<str.size(); i++){
        freq[chartoindex(str, i)]++; 
    }
    int n; char arr[n]; 
    for(int i=0; i<n;i++){
        cin >> arr[i]; 
    } 
    for(int i=0;i<n; i++){
        cout << freq[chartoindex(str, i)] << sp ; 
    }
    return 0;
}
