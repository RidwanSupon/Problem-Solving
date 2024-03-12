import java.util.Scanner;
public class largeNum{
	public static void main(String[] args){
	Scanner obj = new Scanner(System.in);
	
	System.out.println("Enter number 1: ");
	int num1 = obj.nextInt();
	System.out.println("Enter number 2: ");
	int num2 = obj.nextInt();
	System.out.println("Enter number 3: ");
	int num3 = obj.nextInt();
	
	if(num1>num2 && num1>num3){
	System.out.println(num1+" is Larger");
	}
	else if(num2>num1 && num2>num3){
	System.out.println(num2+" is Larger");
	}
	else{
	System.out.println(num3+" is Larger");
	}
	}
}
