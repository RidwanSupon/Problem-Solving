import java.util.Scanner;
public class DigitSum{
	public static void main(String[] args){
	Scanner scanner = new Scanner(System.in);
	int num; int temp1=0; int sum=0;
	
	System.out.println("Enter a num: ");
	num=scanner.nextInt();
	while(num!=0){
	temp1=num%10;
	sum+=temp1;
	num=num/10;
	}
	System.out.println("Sum of the number is :"+ sum);
	}
}
