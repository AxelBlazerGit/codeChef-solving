#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    int arr[]={0,0};
	    int r;
	    cin>>r;
	    while(r-->0){
	        string s;
	        cin>>s;
	        (s=="LTIME108") ? ++arr[1] : ++arr[0];
	    }
	    cout<<arr[0]<<" "<<arr[1]<<endl;
	}

}
