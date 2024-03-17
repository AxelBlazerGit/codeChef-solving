#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;long long n;
    cin>>t;
    while(t--){
        // cin>>n;
        // if(n!=1){//n=pow(10,n-1);
        // cout<<pow(10,n-1)+5<<endl;}
        // else cout<<3<<endl;
        int n;
        cin >> n;
        string output;
        if (n == 1) {
            output = "3";
        } else {
            output = "1" + string(n - 2, '0') + "5";
        }
        cout << output << endl;
    }
}
