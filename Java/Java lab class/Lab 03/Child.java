class Father{
	int a;
	int b;
	void sum(int x, int y){
	int result1 = x + y;
	System.out.println("Summation is : "+result1); 
	} 
}
class Child extends Father{
	int sub(int p,int q){
	a=p;
	b=q;
	return a-b;
	}

public static void main(String[] args){
	Child co = new Child();
	co.sum(10,5);
	System.out.println("The Substraction is: "+co.sub(10,5));
}
}
