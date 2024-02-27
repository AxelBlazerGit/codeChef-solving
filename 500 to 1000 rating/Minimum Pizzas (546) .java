import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int arr[][]=new int[t][2];
		for(int i=0;i<t;i++){
		    for(int j=0;j<2;j++){
		        arr[i][j]=sc.nextInt();
		    }
		}
		for(int i=0;i<t;i++){
		    int pdt=arr[i][0]*arr[i][1];
		    if(pdt%4==0)    System.out.println(pdt/4);
		    else    System.out.println(pdt/4+1);
		}

	}
}
