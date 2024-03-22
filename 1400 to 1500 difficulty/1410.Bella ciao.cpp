#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    //D%d multiple
    //15day 4days
    //p p p p (p+q)*4 + (p+2q)*4 + (p+3q)*3
    //15/4=3 
    //15%4=3 
    //1=>quotient
    //s+=(p+(i-1)q)
    long long t, D, d, p, q;
    cin >> t;
    while (t--) {
        cin >> D >> d >> p >> q;
        // int rate = D / d, m = D % d;
        // long long money = d * (rate * p + q * rate * (rate - 1) / 2) + (p + rate * q) * m;
        // cout<<money<<endl;
          // long long money=D*p
          // for(int i=1;i<=d,D>0;i++,D-=d){
        //     money+=q*i;
        // }
        // if(D>0) money+=D*complete;
        int complete=D/d,remainderr=D%d;
      
        long long money=d*complete*(2*p+(complete-1)*q)/2+remainderr*(q*complete+p);
        
        
        
        cout<<money<<endl;
    }
}
