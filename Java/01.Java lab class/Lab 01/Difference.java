public class Difference{
    public static void main(String[] args) {
        int x = 10;int y = 25;int z = 15;
        int highest1=0;int highest2=0;
        int result=0;

        if (x>=y && x>=z) {
            highest1= x;
            if (y>= z) {
                highest2= y;
            } else {
                highest2= z;
            }
        } else if (y>=x && y>=z){
            highest1= y;
            if (x>=z){
                highest2= x;
            } else {
                highest2= z;
            }
        } else {
            highest1= z;
            if (x>=y) {
                highest2= x;
            } else {
                highest2= y;
            }
        }

        result= highest1-highest2;

        System.out.println("Difference between two highest num: "+result);
    }
}
