import java.util.Scanner;

public class ReverseWord{
	public static void main(String[] args){
	
	System.out.println("Enter a word: ");
	Scanner input = new Scanner(System.in);
	String str = input.nextLine();
	String str2 = "";
	for(int i=str.length()-1;i>=0;i--){
	char temp1 = str.charAt(i);
	str2 += temp1;
	}	
	System.out.println(str2);
	}
}

