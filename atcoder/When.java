package atcoder;

import java.util.Scanner;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
// 

public class When {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int K = sc.nextInt();

        SimpleDateFormat df = new SimpleDateFormat
        ("2023/01/01 21:00:00.000");
        Date date = DateFormat.parse();
        df.setTime(df.getTime() + (K * 60000));
        // Date date = new Date();
        // Calendar calendar = Calendar.getInstance();
        // calendar.setTime(date);

    }
}
