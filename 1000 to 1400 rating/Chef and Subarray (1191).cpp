#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n, streak = 0, ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        streak += (arr[i] > 0) ? 1 : 0;
        ans = max(ans, streak);
        streak = (arr[i] == 0) ? 0 : streak;
    }
    cout << ans;
}
