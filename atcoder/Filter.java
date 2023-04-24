import java.util.Scanner;

public class Filter {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i = 0; i < N; i++){
            int box = sc.nextInt();
            if(box % 2 == 0){
                System.out.print(box);
                System.out.print(' ');
            }
        }
    }
}
