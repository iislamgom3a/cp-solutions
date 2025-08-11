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
    ll Idays, years, months;
    cin >> Idays;
    years = Idays / 365;
    Idays %= 365;
    months = Idays / 30;
    Idays %= 30;
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << Idays << " days";
    return 0;
}
