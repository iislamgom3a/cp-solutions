#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define loop(i, n) for (int i = 0; i < n; i++)
// #define ll long long
// #define int long long
#define all(x) x.begin(), x.end()
#define S " "
using namespace std;
typedef long long ll;
const int MOD = 132120577;
const int MAX_X = 100005;

ll freq[MAX_X];
ll diff_count[2 * MAX_X];
ll prefix_sum[2 * MAX_X];

signed main()
{
    IO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        fill(freq, freq + MAX_X, 0);
        fill(diff_count, diff_count + 2 * MAX_X, 0);
        fill(prefix_sum, prefix_sum + 2 * MAX_X, 0);
        vi values;
        loop(i, n)
        {
            int x;
            ll f;
            cin >> x >> f;
            freq[x] = f;
            values.push_back(x);
        }

        loop(i, values.size())
        {
            int xi = values[i];
            ll fi = freq[xi];

            diff_count[0] = (diff_count[0] + fi * (fi - 1) / 2) % MOD;

            for (int j = i + 1; j < values.size(); ++j)
            {
                int xj = values[j];
                ll fj = freq[xj];
                int diff = abs(xi - xj);
                ll count = (fi * fj) % MOD;
                diff_count[diff] = (diff_count[diff] + count) % MOD;
            }
        }

        for (int i = 1; i < 2 * MAX_X; ++i)
        {
            prefix_sum[i] = (prefix_sum[i - 1] + diff_count[i]) % MOD;
        }
/////////////////////////
/////////////////////////
        int q;
        cin >> q;

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            ll ans = (prefix_sum[r] - prefix_sum[l - 1] + MOD) % MOD;
            cout << ans << '\n';
        }
    }
}

