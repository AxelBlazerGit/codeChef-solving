#include <bits/stdc++.h>

using namespace std;

bool isVowel(char x) {
    unordered_set < char > vowels = {
        'a',
        'e',
        'i',
        'o',
        'u'
    };
    return vowels.find(x) != vowels.end();
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // your code goes here
        int contiguous = 0;
        bool happy = false;
        
        for (auto it : s) {
            if (isVowel(it)) {
                contiguous++;
                if (contiguous == 3) {
                    happy = true;
                    break;
                }
            } else {
                contiguous = 0;
            }
        }

        if (happy) {
            cout << "happy" << endl;
        } else {
            cout << "sad" << endl;
        }
    }

}
