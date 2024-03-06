#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        switch (n % 8) {
            case 1:
                cout << (n + 3) << "LB" ;
                break;
            case 2:
                cout << (n + 3) << "MB" ;
                break;
            case 3:
                cout << (n + 3) << "UB" ;
                break;
            case 4:
                cout << (n - 3) << "LB" ;
                break;
            case 5:
                cout << (n - 3) << "MB" ;
                break;
            case 6:
                cout << (n - 3) << "UB" ;
                break;
            case 7:
                cout << (n + 1) << "SU" ;
                break;
            case 0:
                cout << (n - 1) << "SL" ;
                break;
        }
        cout<<endl;

    }
}
