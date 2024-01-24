import java.util.Scanner;
public class Swap{
	public static void main(String[] args){
	Scanner scanner = new Scanner(System.in);
	int x; int y;
	System.out.println("Enter value of x: ");
	x=scanner.nextInt();
	System.out.println("Enter value of y: ");
	y=scanner.nextInt();
	System.out.println("After Swapping Values");
	x=x+y;
	y=x-y;
	x=x-y;
	System.out.println("x: "+ x +" y: "+y);
	}
}
