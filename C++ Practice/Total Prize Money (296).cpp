// The code below is incorrect. Debug this code to solve the problem.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y,prize_top10,prize_11to100;
   cin>>X>>Y;
   prize_top10 = 10*X;           
   prize_11to100 = 89*Y;        
   cout<<prize_top10+prize_11to100+Y<<endl; 
   }
 return 0;
}
