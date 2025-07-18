#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    string str = "hello";
    string in; cin >> in ;
    for(int i=0 ; i<in.size(); i++){
        if(in[i] == str.begin()){
            str.erase(str.begin(), 1);
        }
    }
    if(str != "") cout << "NO" << endl ; 
    else cout << "YES" << endl ; 
    return 0;
}