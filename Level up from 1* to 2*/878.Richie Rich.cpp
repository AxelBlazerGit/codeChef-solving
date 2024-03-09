#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,curr,target,increment;
    cin>>t;
    while(t--){
        cin>>curr>>target>>increment;
        cout<<(target-curr)/increment<<endl;
    }
}
