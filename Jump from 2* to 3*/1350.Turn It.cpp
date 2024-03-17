#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,u,v,a,s;
    cin>>t;
    while(t--){
        cin>>u>>v>>a>>s;
        if(u==v) {
            cout<<"YES"<<endl;
            continue;
        }
        else if(v*v>=(u*u-2*a*s)){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }
        //v has to be greater than u2 -2as
        //v=u rhs u2-2as
    }
}
