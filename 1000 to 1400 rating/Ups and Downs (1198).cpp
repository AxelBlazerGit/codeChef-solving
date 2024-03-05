#include <bits/stdc++.h>
using namespace std;

int main() {
    //your code goes here
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n <= 2) {
            if (n == 1) {
                cout << arr[0] << endl;
            } else {
                if (arr[0] > arr[1])
                    cout << arr[1] << " " << arr[0] << endl;
                else
                    cout << arr[0] << " " << arr[1] << endl;
            }

        } else {
            for (int i = 1; i < n - 1; i++) {
                if(i%2==0){
                    if(arr[i]>arr[i-1]) swap(arr[i],arr[i-1]);
                    if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
                }else{
                    if(arr[i]<arr[i-1]) swap(arr[i],arr[i-1]);
                    if(arr[i]<arr[i+1]) swap(arr[i],arr[i+1]);
                }
            }
        }

        for (auto ele : arr)
            cout << ele << " ";
        cout << endl;
    }

    return 0;
}
