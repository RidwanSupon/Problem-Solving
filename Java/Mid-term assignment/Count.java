import java.util.Scanner;

public class Count{
	public static void main(String[] args){
	Scanner input = new Scanner(System.in);
	System.out.println("Enter a String: ");
	String str = input.nextLine();
	
	int letterCount=0;
	int spaceCount=0;
	int numberCount=0;
	int otherCount=0;
	
	for(int i=0;i<str.length();i++){
	char c = str.charAt(i);
	if(Character.isLetter(c)){
	letterCount++;
	}
	else if(Character.isDigit(c)){
	numberCount++;
	}
	else if(Character.isWhitespace(c)){
	spaceCount++;
	}
	else{
	otherCount++;
	}
	}
	System.out.println("Total Letter: "+letterCount);
	System.out.println("Total Digit: "+numberCount);
	System.out.println("Total Space: "+spaceCount);
	System.out.println("Total Other character: "+otherCount);
	}
}
