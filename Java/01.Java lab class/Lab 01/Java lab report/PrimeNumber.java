import java.util.Scanner;

class ReturnValue{
	int num;
	int flag=0;
	int PrimeOrNot(int n){
		if(n==0 || n==1){
		flag=1;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
		}
	}
		return flag;
	}
}

class PrimeNumber{
	public static void main(String[] args){
		Scanner obj= new Scanner(System.in);
		ReturnValue num = new ReturnValue();
		System.out.println("Enter a number: ");
		int input = obj.nextInt();
		int output = num.PrimeOrNot(input);
		if(output == 1){
		System.out.println("Not prime number");
	}
		else{
		System.out.println("Prime Number");
		}
	}
}
