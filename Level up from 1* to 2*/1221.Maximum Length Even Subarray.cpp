#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            if(n/2 %2==0) cout<<n<<endl;
            else cout<<n-1<<endl;
        }
        else if((n+1)/2 % 2!=1) cout<<n<<endl;
        else cout<<n-1<<endl;
    }
}
