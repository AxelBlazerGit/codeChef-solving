#include <bits/stdc++.h>

using namespace std;

pair < int, int > findMinMax(int arr[], int size) {
    // Initialize min and max with the first element
    int minElement = arr[0];
    int maxElement = arr[0];

    // Traverse the array to find min and max
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        } else if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return make_pair(minElement, maxElement);

}
int main() {
    // your code goes here
    int t, n, ans = 0;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> n;
        int arrival[n], departure[n];
        for (int i = 0; i < n; i++) cin >> arrival[i];
        for (int i = 0; i < n; i++) cin >> departure[i];
        pair < int, int > minmax = findMinMax(arrival, n), minmax2 = findMinMax(departure, n);

        int time[minmax2.second - minmax.first + 1] = {
            0
        };

        for (int i = 0; i < n; i++) {
            for (int j = arrival[i]; j < departure[i]; j++) {
                time[j - minmax.first]++;
            }
        }
        cout << findMinMax(time, minmax2.second - minmax.first + 1).second << endl;


    }
}
