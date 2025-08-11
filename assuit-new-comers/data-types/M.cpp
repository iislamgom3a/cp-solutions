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
    char a;
    cin >> a;
    if (a >= 48 && a <= 57)
        cout << "IS DIGIT" << endl;
    else if (a >= 65 && a <= 90)
        cout << "ALPHA\nIS CAPITAL" << endl;
    else if (a >= 97 && a <= 122)
        cout << "ALPHA\nIS SMALL" << endl;
    return 0;
}