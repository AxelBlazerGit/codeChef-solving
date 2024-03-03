#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,moni,amt;
	    cin>>n>>moni;
	    string s="";
	    for(int i=0;i<n;i++){
	        cin>>amt;
	        s+=(amt>moni)? '0':'1';
	        if(amt<=moni) moni-=amt;
	    }
	    cout<<s<<endl;
	}

}
