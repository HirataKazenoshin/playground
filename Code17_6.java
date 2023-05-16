import java.io.*;

public class Code17_6 {
    public static void main(String[] args){
        FileWriter fw = new FileWriter("data.txt");
        try {
            fw.write("hello!");
        } catch (Exception e) {
            System.out.println("何れかの例外が発生しました");
        } finally {
            fw.close();
        }
    }
}
