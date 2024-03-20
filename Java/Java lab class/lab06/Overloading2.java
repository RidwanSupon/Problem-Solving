class Machine{
	void Add(int x,int y){
	System.out.println(x+y);
	}
	
	void Add(int x,int y,int z){
	System.out.println(x+y+z);
	}
	
	void Add(int x,int y,int p,int q){
	System.out.println(x+y+p+q);
	}
}
class Overloading2{
	public static void main(String[] args){
	Machine obj=new Machine();
	obj.Add(2,50);
	obj.Add(2,25,1);
	obj.Add(2,9,5,77);
	}
}
