#include <bits/stdc++.h>
using namespace std;

#define fastio() \
ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

typedef long long ll;

int main(){
    fastio();
    string food = "pizza"; 
    string &meal = food ; 
    cout  << &meal << endl ; 
    return 0;
}

