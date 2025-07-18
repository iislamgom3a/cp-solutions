#include <bits/stdc++.h>
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

void swap(ll *a, ll *b)
{
    ll temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    fastio();
    ll n, x;
    int i, j;
    cin >> n >> x;
    ll arr[n];
    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    ll shift_times = x % n;

    if (shift_times != 0)
    {

        for (i = 0; i < shift_times; i++)
        {
            for (j = 1; j < n; j++)
            {
                swap(&arr[0], &arr[j]);
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}