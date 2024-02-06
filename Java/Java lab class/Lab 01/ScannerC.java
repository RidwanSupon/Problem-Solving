import java.util.Scanner;

public class ScannerC{
	public static void main(String[] args){
	Scanner obj = new Scanner(System.in);
	System.out.println("Enter your F_name: ");
	String F_name=obj.nextLine();
	System.out.println("Enter your L_name: ");
	String L_name=obj.nextLine();
	System.out.println(F_name+" "+L_name);
}
}
