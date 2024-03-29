#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    string a,b,ans="";
    while(t--){
        ans="";
        cin>>a>>b;
        for(int i=0;i<a.length();i++)
            ans+=(a[i]==b[i])?'G':'B';
        cout<<ans<<endl;
    }
}
