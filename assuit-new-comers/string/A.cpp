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
	int tt;
	cin >> tt;
	cin.ignore();
	while (tt--)
	{
		string s;
		bool goo = false;
		getline(cin, s);
		ll len = s.length();
		for (int i = 0; i < len - 2; i++)
		{
			if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
			{
				goo = true;
				break;
			}
		}
		(goo) ? cout << "Good" << endl : cout << "Bad" << endl;
	}
	return 0;
}
