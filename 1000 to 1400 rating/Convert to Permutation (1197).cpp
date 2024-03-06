#include <bits/stdc++.h>

using namespace std;
//desc sprt
//arr[i]==n
//n-- continue
//elsewhile[i]!=n)
//arr[i]++
//c++
//4 2 1 1
//c=1->2 
//3 3 0 
//sort check arr[i]!>n-- c++
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high], i = low - 1;
//     for (int j = low; j < high; ++j) {
//         if (arr[j] >= pivot) {
//             swap(arr[++i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pivotIndex = partition(arr, low, high);
//         quickSort(arr, low, pivotIndex - 1);
//         quickSort(arr, pivotIndex + 1, high);
//     }
// }
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n, greater < int > ());
        int minn = 0, temp = n;
        for (int i = 0; i < n; i++) {
            if (arr[i] > temp) {
                //ut << -1 << endl;
                minn=-1;
                break;
            } else {
                if (arr[i] == temp) temp--;
                else {
                    minn += temp-arr[i];
                    temp--;
                }
            }
        }
        cout << minn << endl;

    }
}

// bool checkPerm(int freq[], int n) {
//     for (int i = n; i > 0; i--) {//1 1 1 1
//         if (freq[i]-1>0)//find buffers allowed
//         //per item
//             return false;}
//     }
//     return true;//
// }
// bool checkIdx(int freqArray[], int size, int n) {
//     for (int i = n + 1; i < size; ++i) {
//         if (freqArray[i] > 0) return true;
//     }
//     return false;
// }

// int main() {
//     // your code goes here
//     int t, n, freq[1001] = {
//         0
//     };
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         int arr[n], minn = 0;
//         fill(freq, freq + 1001, 0);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//             freq[arr[i]]++;
//         }
//         if (freq[n] > 1) return -1;
//         if (checkIdx(freq, n, 1001)) {
//             cout << -1 << endl;
//             continue;
//         }
//         if (!checkPerm(freq, n)) {
//             cout << -1 << endl;
//             continue;
//         }
//         else {
//             for (int i = n; i > 0; i--) {
//                 if (i - freq[n] == 0) continue;
//                 else minn++;
//             }
//         }
//         cout << minn << endl;
//     }
//     return 0;
// }
