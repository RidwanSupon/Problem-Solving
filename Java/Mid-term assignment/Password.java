import java.util.Scanner;

public class Password{
	public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	System.out.println("Enter a password: ");
	String pass = input.nextLine();
	System.out.println("Your pass is: "+pass); 
	}
}
