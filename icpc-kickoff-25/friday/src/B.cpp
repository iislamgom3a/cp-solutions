#include <bits/stdc++.h>
using namespace std;
typedef long long ll ; 
int main() {
   
    ll low = 1, high = 1e9;
    while (low <= high) {
        ll mid = (low + high) / 2;
        cout << mid << endl;
        cout.flush(); 

        char c;
        cin >> c;

        if (c == '=') {
            cout << "! " << mid << endl;
            cout.flush();
            break;
        } else if (c == '<') {
            high = mid - 1;
        } else { 
            low = mid + 1;
        }
    }

    return 0;
}
