
///////////////////////////UNSOLVED


public PEOPLE{

	int age;
	String name;
	public PEOPLE(){
	
	this.age=21;
	this.name="Ridwan";
	
	}
	public PEOPLE(int age, String name){
	
	this.age=age;
	this.name=name;
	}
	
	String Hello(String x){
	return x;
	}
}
class temp{
public static void main(String args[]){
PEOPLE obj = new PEOPLE();
System.out.println(obj.Hello("Printed method"));
}
}
