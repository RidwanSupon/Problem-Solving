import java.util.Scanner;
public class Factorial{
	public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	
	System.out.println("Enter a num: ");
	int num = input.nextInt();
	int output = 1;
	System.out.println("Factorial of" + num + "is : ");
	for(int i=num; i>=1; i--){
	output *= i;
	}
	System.out.println(output);
	}
}
