#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t-- > 0) {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int win = a1 + a2 + a3 - b1 - b2 - b3 - min({
            a1,
            a2,
            a3
        }) + min({
            b1,
            b2,
            b3
        });

        if (win > 0) cout << "Alice" << endl;
        else if (win == 0) cout << "Tie" << endl;
        else cout << "Bob" << endl;
    }
}
