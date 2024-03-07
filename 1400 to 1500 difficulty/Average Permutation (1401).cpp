#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){//6 4 2 1 3 5
	    cin>>n;
	    int arr[n],temp=n;
	    //arr[0]=n;arr[n-1]=1;
	    for(int i=0;i<n/2;i++){
	        
	        arr[i]=temp--;
	        arr[n-i-1]=temp--;
	        
	    }if(n%2==1) arr[n/2]=1;
	    for(auto ele:arr) cout<< ele<<" ";cout<<"\n";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//n=1 ans=p1/3
    //n2 ans=(p1+p2)/3
    //arr 2  3    4   5  1   6 
    //    p1 p2   p3 p4 p5 p6

    //n=3 sigma/3;
    //n=4 (p1+p2+p3)+(p2+p3+p4)=p1+p4+2(rest)
    //n=5 (p1+..)+p3+p4+p5=p1+p5+2(rest..) 
    //arr[0]=1 arr[n-1]=2.. arr[rest(i)]=i+1

    // n=4 
    // 1 2 3 
    // 2 3 4 
    
    // n=5 //5 2 1 3 4
    // 1 2 3
    // 2 3 4 
    // 3 4 5 
    
    // n=6 // 5 4 3 2 1 6
    // 1 2 3 
    // 2 3 4 
    // 3 4 5 
    // 4 5 6 
    
}
