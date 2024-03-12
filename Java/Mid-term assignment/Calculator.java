import java.util.Scanner;

public class Calculator{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter number 1 :");
        double num1 = input.nextDouble();
        
        System.out.println("Enter operation which you want: ");
        char operator = input.next().charAt(0);
        
        System.out.println("Enter number 2 :");
        double num2 = input.nextDouble();
        
        double result = 0;
        
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    System.out.println("disible by 0");
                    return;
                }
                break;
            default:
                System.out.println("Invalid operator.");
                return;
        }
        
        System.out.println("Ans: " + result);
        
    }
}

