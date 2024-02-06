public class ParaConst{
 int num;
 public ParaConst(int n){
 	num = n;
 	System.out.println("Para meter call num: "+num);
 	
 }
 public static void main(String[] args){
 	ParaConst obj = new ParaConst(5);
 }
}
