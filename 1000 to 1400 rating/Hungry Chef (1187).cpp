#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    //array: normal premium quantity rupees
    int t, X, N, P, MONEY, normal, premium;
    cin >> t;
    //string ans;
    while (t--) {
        cin >> N >> P >> X >> MONEY;
        normal = 0;
        premium = 0;
        if (N * X > MONEY) { //cant afford
            cout << -1 << endl;
            //break;
        } else if (P * X <= MONEY) { //ambani
            cout << 0 << " " << X << endl;
            //break;
        }
        //if normal*x==rupees print(x,0)

        // while (true) {
        //     premium+=0;
        // }
        else if (MONEY - X * N >= (P - N)) { //3-2*1>=2-1
            premium = (MONEY - X * N) / (P - N); //1/1=1
            normal = X - premium;
            cout << normal << " " << premium << endl;
        } else if (MONEY - (N * X) < (P - N)) { //1<1
            cout << X << " " << 0 << endl;
            // break;
        }
        //majorly broke: money-normal*quantity<premium-normal: 
        //normal=quantity premium=0

    }
}
