class Machine{
	void Add(int x,int y){
	System.out.println(x+y);
	}
	
	void Add(float x,int y){
	System.out.println(x+y);
	}
	
	void Add(double x,float y,int z){
	System.out.println(x+y+z);
	}
}
class Overloading3{
	public static void main(String[] args){
	Machine obj=new Machine();
	obj.Add(2,50);
	obj.Add(25.5f,32);
	obj.Add(2.2,5.7f,9);
	}
}
