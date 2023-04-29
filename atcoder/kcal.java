import java.util.Scanner;

public class kcal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A, B;
        A = Integer.parseInt(sc.next());
        B = Integer.parseInt(sc.next());

        int ans;
        ans = A * (B / 100);
        System.out.println(ans);
    }
}
