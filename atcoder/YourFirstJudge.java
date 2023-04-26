import java.util.Scanner;

public class YourFirstJudge {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String text = sc.nextLine();
        String answer = "Hello,World!";
        if (text.equals(answer)){
            System.out.println("AC");
            System.exit(0);
        } else {
            System.out.println("WA");
            System.exit(0);
        }
    }
}