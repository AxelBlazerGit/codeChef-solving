#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    long t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if(n==1) {cout<<0<<endl;continue;}
        cout<<n*n/2<<endl;
    }
}
