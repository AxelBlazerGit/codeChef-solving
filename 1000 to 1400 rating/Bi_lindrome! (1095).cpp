#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int ans=-1;
        int arr[26]={0};
        for(auto ele:s){
            arr[ele-'a']++;
            
        }
        for(auto ele:arr){
            if(ele>1){ ans=n-2;
                break;
            }
        }
        cout<<ans<<endl;
    }
	// your code goes here
    //MAdawnouefjebkabakjbkjewaAM
    //ABCDracecar
    //CASE1: WORDshitDROW
    //case2: rSacFecGaIrSHIT
    //CASE3: SHITracecar
    //COUNTFREQ IN ORDER OF APPEARANCE
    // 2 2=SUM
    //LENGHT OF ORIGINAL STIRNG=N-SUM
    // DSADSABCCSNAE
    // D=
    // S=
    // A=
    // B=
    // C=
    // N=
    // E=
    //BBKAHJA
}
