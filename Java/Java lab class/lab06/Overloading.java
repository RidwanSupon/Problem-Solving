class Machine{
	void Add(int x,int y){
	System.out.println(x+y);
	}
	
	void Add(int x,double y){
	System.out.println(x+y);
	}
	
	void Add(double x,int y){
	System.out.println(x+y);
	}
}
class Overloading{
	public static void main(String[] args){
	Machine obj=new Machine();
	obj.Add(2,50);
	obj.Add(2,25.5);
	obj.Add(2.2,5);
	}
}
