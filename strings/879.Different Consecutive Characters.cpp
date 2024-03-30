#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,ans;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        ans=0;
        // string s;
        cin>>s;
        int i=0;
        while(i<s.length()){
            if(s[i]==s[i+1]) {ans++;}
            i++;
            // else
        }cout<<ans<<endl;
    }
}
