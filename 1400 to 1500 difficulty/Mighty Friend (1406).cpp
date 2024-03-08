#include <bits/stdc++.h>

using namespace std;
int sum(const vector < int > & myVector) {
    int result = 0;

    for (int num: myVector) {
        result += num;
    }

    return result;
}

pair < int, int > findMaxElementAndIndex(const int arr[], int size) {
    int maxElement = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    return make_pair(maxElement, maxIndex);
}

int main() {
    // your code goes here
    int t, n, swaps, temp, msum, tsum;
    cin >> t;
    while (t--) {
        msum = 0;
        tsum = 0;
        cin >> n >> swaps;
        vector < int > motu, tomu;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (i % 2 == 0) {
                motu.push_back(temp);
                msum += temp;
            }
            else {
                tomu.push_back(temp);
                tsum += temp;
            }
        }
        if (tsum > msum) {
            cout<<"YES"<<endl;
        }
        else {
            sort(tomu.begin(), tomu.end());
            sort(motu.begin(), motu.end(), greater < int > ());
            int a = 0;
            while (swaps-- > 0 && (sum(tomu) < sum(motu))) {
                int t = tomu[a];
                tomu[a] = motu[a];
                motu[a] = t;
                a++;
            }
            sum(tomu)>sum(motu)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
    }

}
