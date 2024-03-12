import java.util.Scanner;
public class PosiNegi{
	public static void main(String[] args){
	Scanner obj = new Scanner(System.in);
	
	System.out.println("Enter a number : ");
	int num1 = obj.nextInt();
	
	if(num1>0){
	System.out.println(num1+" is Positive");
	}
	else{
	System.out.println(num1+" is Negative");
	}
	}
}
