#include <bits/stdc++.h>

using namespace std;

int main() {
    //your code goes here
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int arr[n], freq[n] = {0};

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i] - 1]++;
        }

        int maxFreq = *max_element(freq, freq + n);
        cout << n - maxFreq << endl;
    }

    return 0;
}
