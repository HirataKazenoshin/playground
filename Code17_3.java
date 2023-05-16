import java.io.*;

public class Code17_3 {
    
    public static void main(String[] args){
        try {
            FileWriter fw = new FileWriter("data.txt");
            fw.write("hello!");
            fw.close();
        } catch (Exception e) {
            System.out.println("なんらかのエラーが発生しました");
        }
    }
}
