import java.util.Scanner;

class ReturnValue{
	
	int num; int reverseNum;int temp;
	
	int getNum(int n){
	   
	   while(n!=0){
	       	temp = n%10;
		reverseNum = reverseNum*10+temp;
		n=n/10;
	   }
	 return reverseNum;
	}
}

class ReverseNumber{
	public static void main(String[] args){
	
		Scanner obj = new Scanner(System.in);
		ReturnValue Rnum1 = new ReturnValue();
		
		System.out.println("Enter a Number: ");
		int input = obj.nextInt();
		int output = Rnum1.getNum(input);
		System.out.println("Reverse Number is: "+ output);
		
	}
}
