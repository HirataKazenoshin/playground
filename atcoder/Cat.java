import java.util.Scanner;

public class Cat{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String S = sc.next();
        System.out.println(S.replace("na", "nya"));
    }
}