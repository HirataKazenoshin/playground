import java.util.Scanner;


public class atcoderPrefix {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String S = sc.nextLine();
        String T = sc.nextLine();

        if(T.length() < S.length()){
            System.out.println("No");
            System.exit(0);
        }
        int SSize = S.length();
        String TSplit = T.substring(0, SSize);
        if(S.equals(TSplit)){
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
