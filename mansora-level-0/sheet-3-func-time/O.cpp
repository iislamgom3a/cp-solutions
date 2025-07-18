// Problem: O. Sort String
// Contest: Codeforces - Sheet #4 (Strings)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
// Memory Limit: 4 MB
// Time Limit: 7000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
 
#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
 
typedef long long ll;
int main(){
    fastio();
		int n; cin >> n;
		int frq[26] ={0}; 
		for(int i=0; i<n;i++){
			char ch; cin >> ch ; 
			frq[ch-'a']++; 
		}
		
		for(int i=0; i<26;i++){
			char ch = i+'a'; 
			while(frq[i] != 0){
				cout << ch ; 
				frq[i] --; 
			}
		}
    return 0;
}