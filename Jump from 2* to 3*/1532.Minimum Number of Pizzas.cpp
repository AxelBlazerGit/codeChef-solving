#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
    if (a == b) 
        return a; 
   
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
}
int main() {
	// your code goes here
    int t;long long n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        // if(k%n==0){
        //     cout<<k/n<<endl;
        //     continue;
        // }
        cout<<n/gcd(n,k)<<endl;
    }
}
