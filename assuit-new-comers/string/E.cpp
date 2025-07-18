#include <bits/stdc++.h>
#include <string>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr)

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define forr(i, a, b) for (int i = (a); i <= (int)(b); ++i)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF = 1e9;

int main()
{
    fastio();
    string str;
    ll sum = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        sum += (int)str[i] - '0';
    }
    cout << sum;
    return 0;
}