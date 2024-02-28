import java.util.Scanner;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            long a, b;
            a = sc.nextLong();
            b = sc.nextLong();

            if (b % a == 0) {
                System.out.println(b / a - 1);
            } else {
                System.out.println(b / a);
            }
        }
    }
}
