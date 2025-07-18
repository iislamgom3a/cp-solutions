#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr)

typedef long long ll;

int main()
{
    fastio();
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1.length() << " " << str2.length() << endl;
    cout << str1 + str2 << endl;
    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;
    cout << str1 << " " << str2;
    return 0;
}

int 
