#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t-- > 0) {
        int r, flag = 0;
        cin >> r;
        if (r < 2) {
            cout << "no" << endl;
            continue;
        }
        for (int i = 1; i <= r; i++) {
            if (r % i == 0 && i != r && i != 1) {
                cout << "no" << endl;
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            cout << "yes" << endl;
        }
    }

    return 0;
}
