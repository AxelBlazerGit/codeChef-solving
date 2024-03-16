#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, x, y, k;
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        if (x == y) cout << 0 << endl;
        else {
            (abs(x - y) % k == 0) ? cout << (abs(x - y) / k) << endl: cout << (abs(x - y) / k + 1) << endl;
        }
    }
}
