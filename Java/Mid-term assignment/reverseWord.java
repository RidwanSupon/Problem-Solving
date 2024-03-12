import java.util.Scanner;

public class reverseWord{
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        
        System.out.println("Enter a string:");
        String inputString = obj.nextLine();
        
        String[] words = inputString.split("\\s+");
        StringBuilder reversedString = new StringBuilder();
        
        for (int i = words.length - 1; i >= 0; i--) {
            reversedString.append(words[i]).append(" ");
        }
        System.out.println("Reversed string: " + reversedString.toString().trim());
    }
}

