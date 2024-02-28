#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int testCases;
    cin>>testCases;
    while(testCases-->0){
        int terms;
        cin>>terms;
        int coefficients[terms];
        for (int i = 0; i < terms; ++i) {
            cin >> coefficients[i];
        }
        
        for (int i = terms - 1; i >= 0; --i) {
            if (coefficients[i] != 0) {
                cout << i << endl;
                break;
            }
        }
    }
}
