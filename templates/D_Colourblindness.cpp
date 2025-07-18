#include <bits/stdc++.h>
using namespace std;
 
#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
 
typedef long long ll;
 
int main(){
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    int tt; cin >> tt;
    while (tt--)
    {
        int grid ; cin >> grid;
        bool is_id = true; 
        string str1, str2; 
        cin >> str1 >> str2; 
        for(int i=0; i<grid; i++){
            if(str1[i] == 'R' && str2[i] != 'R' || str2[i] == 'R' && str1[i] != 'R' ) {
                is_id = false ; 
                break; 
            }
        }   
        cout << ( is_id ? "YES" : "NO") << endl ; 
    }
    return 0;
}