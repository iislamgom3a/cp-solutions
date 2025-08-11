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
    string a, b, as, bs;
    getline(cin, a);
    getline(cin, b);
    size_t lastSpacePos1 = a.find_last_of(' ');
    size_t lastSpacePos2 = b.find_last_of(' ');
    as = a.substr(lastSpacePos1 + 1);
    bs = b.substr(lastSpacePos2 + 1);

    if (as == bs)
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT" << endl;

    return 0;
}
