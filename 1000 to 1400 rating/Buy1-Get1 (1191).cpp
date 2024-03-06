#include <bits/stdc++.h>

using namespace std;
bool smol(char x) {
    return ((x - 'a') >= 0 && ('z' - x) >= 0);
}
int main() {
    // your code goes here
    int t;
    string str;
    cin >> t;
    while (t--) {
        cin >> str;
        int freq[52]={0};
        for (auto ele: str) {
            if (smol(ele)) freq[ele - 'a']++;
            else freq[ele - 'A' + 26]++;
        }
        int ans = 0;
        for (auto ele: freq) {
            if (ele % 2 == 0) ans += ele / 2;
            else ans += ele / 2 + 1;

        }
        cout << ans << endl;
    }
}
