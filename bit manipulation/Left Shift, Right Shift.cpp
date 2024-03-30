#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,r,l,ans;
    cin>>n>>l>>r;
    n=n>>r;
    n=n<<l;
    cout<<n;
}
