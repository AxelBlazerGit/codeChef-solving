#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//2 3 =2 integers 1+2 
	// 22 23 33 
	//2 4 =3 integers
	// 22 23 24 33 34 44 = 6 =1+2+3 
	//2 5=4ints
	// 22 23 24 25 33 34 35 44 45 55 =10 =1+2+3+4
	//2 6 
	//22 23 24 25 26 33 34 35 36 44 45 46 55 56 66
	//5 7
	//55 56 57 66 67 77
	//22 33 44 55diag
	//          22 23 24 25
	//             33 34 35
	//                44 45
	//                   55
	
    int t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        cout<<(r-l)*2+1<<endl;
    }
}
