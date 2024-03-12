import java.util.Arrays;
import java.util.Scanner;

public class largestNum{
    public static void main(String[] args) {
        final int size = 5;
        
        Scanner obj = new Scanner(System.in);
        
        int[] array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = obj.nextInt();
        }
        
        Arrays.sort(array);
        int secondlarge = array[size - 2];
        System.out.println("The second largest num is: " + secondlarge);
    }
}

