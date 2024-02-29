#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>> t;
    while(t-->0){
        long long N;
        cin>>N;
        int a,b;
        cin>>a>>b;
        cout<<(a)*log2(N)+b*(log2(N)-1)<<endl;
        
        
    }
}
