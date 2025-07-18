// Problem: G. Conversion
// Contest: Codeforces - Sheet #4 (Strings)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
// Memory Limit: 64 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define fastio()\
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    string s; 
    getline(cin , s);
    for(int i=0; i<s.length(); i++){
    	if(s[i] == ',') s[i] = ' ';
    	else {
    		if(s[i] >= 'A' && s[i] <= 'Z') s[i]+= 32;
    		else s[i]-= 32;
    	}
    }
    cout << s;
    return 0;
}

