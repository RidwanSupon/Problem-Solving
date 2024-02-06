import java.util.Scanner;

public class VowCon{
    public static void main(String[] args) {
    
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char input = obj.next().charAt(0);
        char low = Character.toLowerCase(input); 

        if (low=='a'||low=='e'||low=='i'||low=='o'|| low=='u'){
            System.out.println(input +" is a Vowel");
        } 
        else {
            System.out.println(input +" is a Consonant");
        }
    }
}

