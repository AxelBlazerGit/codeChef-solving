#include <bits/stdc++.h>
using namespace std;

int main() {
    //your code goes
    int t;
    cin >> t;

    pair<int, int> maxlead = {0, 0};
    int cScore1 = 0, cScore2 = 0;

    while (t--) {
        int score1, score2;
        cin >> score1 >> score2;

        cScore1 += score1;
        cScore2 += score2;

        int lead = cScore1 - cScore2;

        if (abs(lead) > maxlead.first) {
            maxlead = {abs(lead), (lead > 0) ? 1 : 2};
        }
    }

    cout << maxlead.second << " " << maxlead.first;

    return 0;
}
