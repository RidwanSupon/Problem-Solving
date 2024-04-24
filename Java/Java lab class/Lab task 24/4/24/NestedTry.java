public class NestedTry{
    public static void main(String args[]){
        try {
            System.out.println("Outer loop");
           try {
            int a=30/0;
           } catch (ArithmeticException e) {
            System.out.println("1st inner loop try:"+e);
           } 
           try {
            int x[] = new int[5];
            x[7]=10;
           } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("2nd inner loop try:"+e);
           }
        } catch (Exception e) {
            System.out.println("Outer catch");
        
        }
        System.out.println("This is main method");
    }
}