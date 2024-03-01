#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, sum = 0, plus = 0, minus = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (auto ele: arr) {
            sum += ele;
            ele > 0 ? plus++ : minus++;
        }
        if (sum % 2 != 0 || n % 2 != 0) cout << -1 << endl;
        else {
            if (sum % 2 == 0) cout << abs(sum) / 2 << endl;
            else cout << -1 << endl;
        }
    }

}
