import java.util.Scanner;

public class EdgeChecker {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        if(2 * a == b || 2 * a == b + 1){
            System.out.println("Yes");
        } else if (a == b * b || 1 + a == b * 2){
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
