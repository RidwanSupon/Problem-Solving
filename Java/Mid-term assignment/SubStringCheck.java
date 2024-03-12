import java.util.Scanner;

public class SubStringCheck{
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        
        System.out.println("main string:");
        String mainString = obj.nextLine();
        
        System.out.println("substring");
        String subString = obj.nextLine();
        
        if (mainString.contains(subString)) {
            System.out.println("Substring '" + subString + "' is present in main string.");
        } else {
            System.out.println("Substring '" + subString + "' is not present in main string.");
        }
    }
}

