#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map < string, int > data;
        for (int i = 0; i < 3 * n; ++i) {
            string codes;
            int solutions;

            cin >> codes >> solutions;
            data[codes] += solutions;
        }
        vector < int > final;
        for (const auto & it: data) {
            final.push_back(it.second);
        }
        sort(final.begin(), final.end());
        for (int i = 0; i < final.size(); ++i) {
            cout << final[i] << " ";
        }cout << endl;
    }

}
