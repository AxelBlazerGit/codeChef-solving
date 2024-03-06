#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t, n;
        string ele;
        cin >> t;
        while (t--) {
            cin >> ele;
            size_t pos = ele.find("<>");
            int count = 0;

            while (pos != string::npos) {
                count++;
                pos = ele.find("<>", pos + 2);
            }cout<<count<<endl;
        }}
