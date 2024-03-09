#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,max,sum;
    cin>>t;
    while(t--){
        cin>>max>>sum;
        if(max>=sum) cout<<sum<<endl;
        else cout<<2*max-sum<<endl;
        
    }
}
