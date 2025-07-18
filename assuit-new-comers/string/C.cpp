// Problem: C. Compare
// Contest: Codeforces - Sheet #4 (Strings)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define fastio()\
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    string str1, str2;
    cin >> str1 >> str2;
    cout << min(str1, str2);
    return 0;
}
