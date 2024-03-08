//User
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static int sumOfArray(ArrayList < Integer > arr)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr.get(i);
        }
        return sum;
    }
    public static void main(String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        // your code goes here
        int T = sc.nextInt();
        while (T-- > 0) {
            int A = sc.nextInt();
            int swaps = sc.nextInt();
            ArrayList < Integer > Motu = new ArrayList < Integer > ();
            ArrayList < Integer > Tomu = new ArrayList < Integer > ();
            for (int i = 0; i < A; i++) {
                if (i % 2 == 0)
                    Motu.add(sc.nextInt());
                else
                    Tomu.add(sc.nextInt());
            }
            Collections.sort(Tomu);
            Collections.sort(Motu);
            Collections.reverse(Motu);
            int a = 0;swaps=Math.min(swaps,Tomu.size());
            while (swaps-- > 0 && (sumOfArray(Tomu) < sumOfArray(Motu)) ) {
                int t = Tomu.get(a);
                //System.out.println(t);
                //System.out.println("Soa:tomu: "+ sumOfArray(Tomu));
                Tomu.set(a, Motu.get(a));
                Motu.set(a, t);
                a++;
            }
            System.out.println(sumOfArray(Tomu) > sumOfArray(Motu) ? "YES" : "NO");
        }
    }
}
