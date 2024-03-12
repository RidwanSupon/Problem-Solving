import java.util.Scanner;

public class ReverseNum{
	public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	System.out.println("Input a Num: ");
	int Num = input.nextInt();
	int Output = reverse(Num);
	System.out.println("Reverse Num: "+Output);
	}
	
	public static int reverse(int n){
	int reverse = 0;
	while( n!=0 ){
		int temp = n%10;
		reverse = reverse * 10 + temp;
		n/=10;
	}
	return reverse;
	}
}
