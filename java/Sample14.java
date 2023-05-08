public class Sample14 {

    public static void main(String[] args){
        int[] array = {10, 20, 30, 40};
        printArray(array);
        int result = sumArray(array);
        printArray(array);
        // System.out.println("配列の合計は" + result);

        // double[] array2 = {1.1, 2.2, 3.3};
        // System.out.println("配列の合計は" + sumArray(array2));
    }

    public static int sumArray (int[] arrrrrrray){
        int sum = 0;
        for(int i = 0; i < arrrrrrray.length; i++){
            sum += arrrrrrray[i];
        }
        arrrrrrray[0] = -1234;
        arrrrrrray[1] = -5678;
        return sum;
    }

    public static double sumArray (double[] arr){
        double sum = 0.0;
        for(int i = 0; i < arr.length; i++){
            sum += arr[i];
        }
        return sum;
    }

    public static void printArray(int[] arr){
        System.out.println("配列の中身は");
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + "  ");
        }
        System.out.println("");
    }
}
