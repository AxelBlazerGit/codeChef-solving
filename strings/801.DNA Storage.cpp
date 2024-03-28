#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, result = "";
        // pair < string, string > replacements[4] = {
        //     make_pair("00", "A"),
        //     make_pair("01", "T"),
        //     make_pair("10", "C"),
        //     make_pair("11", "G")
        // };
        cin >> s;
        // your code goes here
        int i = 0;
        while (i < s.length()) {
            switch (s[i]) {
                case '0':
                    if (s[i + 1] == '0')
                        result += 'A';
                    else if (s[i + 1] == '1')
                        result += 'T';
                    break;
                case '1':
                    if (s[i + 1] == '0')
                        result += 'C';
                    else if (s[i + 1] == '1')
                        result += 'G';
                    break;
            }
            ++i;++i;

        }
        cout<<result<<endl;

    }

}
