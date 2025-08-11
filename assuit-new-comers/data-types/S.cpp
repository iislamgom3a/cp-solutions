#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr)

typedef long long ll;

int main()
{
    fastio();
    double input;
    cin >> input;
    if (input >= 0 && input <= 25)
        cout << "Interval [0,25]";
    else if (input > 25 && input <= 50)
        cout << "Interval (25,50]";
    else if (input > 50 && input <= 75)
        cout << "Interval (50,75]";
    else if (input > 75 && input <= 100)
        cout << "Interval (75,100]";
    else
        cout << "Out of Intervals";
    return 0;
}
