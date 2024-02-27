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
		int arr[][]=new int[t][4];
		for(int i=0;i<t;i++){
		    for(int j=0;j<4;j++){
		        arr[i][j]=sc.nextInt();
		    }
		}
		for(int i=0;i<t;i++){
		    int flag=0;
		    for(int j=0;j<4;j++){
		        
		        if(arr[i][j]==1){
		            flag=1;
		            System.out.println("OUT");
		            break;
		            
		        }
		        
		        
		    }
		    if(flag==0){ System.out.println("IN");}
		}

	}
}
