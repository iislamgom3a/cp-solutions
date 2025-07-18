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
const int MOD = 1e9 + 7;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    fastio();
    int tt; cin >> tt; 
    while(tt--){
        ll n ; cin >> n ; 
        vi p ; 
        for(int i=0 ;i<n ;i++){
            int num ; cin >> num ; 
            p.pb(num);
        }
        vector<vector<int>> sub; 
        for(int i=0 ;i<n; i++){
            for(int j = i  ;j <n ;j++){
                vi temp; 
                for(int k = i ; k <= j; k++){
                    temp.pb(p[k]);            
                }
                sub.pb(temp);
            }
        }
        vi org; 
        for(auto& i: sub){
            int bi = 0;
            for(auto j : i){
                bi |= j;  
            } 
            org.pb(bi); 
        }
        long long sumResult = 0;
        for(auto& i: sub){
            unordered_set<int> present;
            for(auto j: i){
                if(j >= 0) present.insert(j); 
            }

            int mex = 0; 
            while(present.count(mex)) {
                mex++; 
            }
            
            sumResult = (sumResult + org[&i - &sub[0]] * mex) % MOD;
        }
        cout << sumResult << endl ; 
    }
    return 0;
}