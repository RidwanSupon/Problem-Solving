//////////////*************** Lab Task 31-1-24******************parameter name and variable name should be same pls modify later ............


class People{
	 int A;
	 String N;
	 public People(int age, String name){
	 A = age;
	 N = name;
	 }
	 public People(People obj){
	 A = obj.A;
	 N = obj.N;
	 }
	 //void Hello(){
	 //System.out.println("Age: "+ A + " Name: "+ N);
	 //}
	 String Hello(String x){
	 return x;
	 }
	 void display(){
	 System.out.println("Age: "+ A + " Name: "+ N);
	 }
	 
	public static void main(String[] args){
	People ob1 = new People(23,"Ridwanur Rahman");
	People ob2 = new People(ob1);
	ob2.display();
	
	System.out.println(ob1.Hello("Solved"));
}
}
