import java.util.Scanner;

public class Fibonacci{
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        
        System.out.println("enter nth fibonacci: ");
        int input = obj.nextInt();
        int first=0;
        int second=1;
        for(int i = 0; i < input; i++){
            System.out.println(first);
            int temp = first + second;
            first = second;
            second = temp;
        }
    }
}

