#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,h,x,y;
    cin>>t;
    while(t--){
        cin>>h>>x>>y;
        if ((h-y)<=0) cout<<1<<endl;
        else {if ((h-y)%x==0) cout<< (h-y)/x+1<<endl;
        else cout<< (h-y)/x + 2<<endl;}
    }
}
