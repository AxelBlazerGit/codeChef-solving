#include <bits/stdc++.h>
using namespace std;

int findIndex(const int arr[], int size, int t) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == t) {
            return i; 
        }
    }
    return -1;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        if(p[0]==1 && p[n-1]==n){
            cout<<0<<endl;continue;
        }else{
            int one=findIndex(p,n,1),ann=findIndex(p,n,n);
            one<ann? cout<<one-ann-1+n<<endl:cout<<one+n-ann-2<<endl;
            
        }
            
        
    }
}
