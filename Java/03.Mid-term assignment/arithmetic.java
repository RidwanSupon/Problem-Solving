
import java.util.Scanner;
public class arithmetic{
	public static void main(String[] args){
	Scanner scanner = new Scanner(System.in);
	double A;
	double B;
	double sum=0;
	double mul=1;
	double div=0;
	
	System.out.println("First Number is: ");
	A= scanner.nextDouble();
	System.out.println("Second Number is: ");
	B= scanner.nextDouble();
	sum=A+B;
	mul=A*B;
	div=A/B;
	System.out.println("Summation of this two number: "+ sum);
	System.out.println("Division of this two number: "+ div);
	System.out.println("product of this two number: "+ mul);
	
	
	}
}
