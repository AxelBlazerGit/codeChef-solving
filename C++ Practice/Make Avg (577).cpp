// How to find the average of 2 numbers? 

#include <bits/stdc++.h>
using namespace std;

int main() 
{

 int A = 15;
 int C = 19;
 int B = (A + C)/2;
 cout<<B<<endl;

 A = 16;
 C = 18;
 B = (A + C)/2;
 cout<<B<<endl;

return 0;
}


//part2
//  How to check if A and C are both odd or even?

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int A = 15;
 int C = 17;
 if (A%2 == 0 && C%2 == 0)
    {
      cout<<"Both A and C are even"<<endl;
    }
 else if ( A%2!= 0 and C%2 != 0)
    {
      cout<<"Both A and C are odd"<<endl;
    }
else
    {
      cout<<"A is odd and C is even or vice versa"<<endl;
    }
    
 A = 15;
 C = 18;
 if ( A%2== 0 && C%2 == 0)
    {
      cout<<"Both A and C are even"<<endl;
    }
 else if ( A%2 != 0 && C%2 != 0)
    {
      cout<<"Both A and C are odd"<<endl;
    }
 else
    {
      cout<<"A is odd and C is even or vice versa"<<endl;
    }

return 0;
}

//part3
// Update the program below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    int A,B, C;
    cin>>A>>C;
    (A-C)%2==0?cout<<(A+C)/2<<endl:cout<<-1<<endl;
    
   }
 return 0;
}
