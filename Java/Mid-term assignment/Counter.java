import java.util.Scanner;

public class Counter{
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        
        System.out.println("Enter a string:");
        String inputStr = obj.nextLine();
        
        int CountAlphabet = 0;
        int CountDigit = 0;
        int CountSpecialChar = 0;
        for (int i = 0; i < inputStr.length(); i++) {
            char ch = inputStr.charAt(i);
            
            if (Character.isLetter(ch)) {
                CountAlphabet++;
            }
            else if (Character.isDigit(ch)) {
                CountDigit++;
            }
            else {
                CountSpecialChar++;
            }
        }
        
        System.out.println("Total alphabets: "+CountAlphabet);
        System.out.println("Total digits: "+CountDigit);
        System.out.println("Total special characters: "+CountSpecialChar);
    }
}

