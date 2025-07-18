#include <bits/stdc++.h>
using namespace std;

#define fastio()\
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;
int main(){
    fastio();
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    int n,q ; cin >> n >> q;
    string str ; cin >> str;
    while(q--){
        string qu ; cin >> qu;
        if(qu == "substr"){
            int a,b; cin >> a >> b;
            if(a > b ) swap(a, b );
            cout << str.substr(a-1, (b-a)+1) << endl;
        }
        else if(qu == "sort") {
            int a, b; cin >> a>>b;
            if(a > b )swap(a, b);
            sort(str.begin()+a -1, str.begin() +b );
        }
        else if(qu == "pop_back"  ) str.pop_back();
        else if(qu == "back") cout << str.back() << endl;
        else if(qu == "reverse"  ){
            int a, b; cin >> a >> b;
            if(a > b ) swap(a, b );
            reverse(str.begin()+a -1,str.begin()+b);
        }
        else if(qu == "front")cout << str.front() << endl;
        else if(qu == "push_back"  ){
            char i; cin >> i;
            str.push_back(i);
        }else if(qu == "print"  ){
            int i; cin >> i;
            cout << str[i-1] << endl;
        }
    }
    return 0;
}

