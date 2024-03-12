import java.util.Scanner;
public class palindrome{
	public static void main(String[] args){
	Scanner obj = new Scanner(System.in);
	
	System.out.println("Enter a positive number: ");
	int input = obj.nextInt();
	int reverseNum=0;
	int temp = input;
	while(input>0){
	int num = input%10;
	reverseNum = reverseNum*10+num;
	input=input/10;
	}
	if(temp==reverseNum){
	System.out.println(reverseNum+" is palindrome");
	}
	else{
	System.out.println(reverseNum+" is not palindrome");
	}
	
	}
}
