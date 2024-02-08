interface begin{
	void dog();
	void cat();
	void lion();
	void tiger();
}

abstract class intermediate implements begin{
	public void dog(){
	System.out.println("I am dog");
	} 
}
abstract class expert extends intermediate{
	public void cat(){
	System.out.println("I am cat");
	}
	public void lion(){
	System.out.println("I am lion");
	}
}
class Final extends expert{
	public void tiger(){
	System.out.println("I am tiger");
	}
}
class AbstractInheritance{
	public static void main(String[] args){
	Final obj = new Final();
	obj.dog();
	obj.cat();
	obj.lion();
	obj.tiger();
	}
}
