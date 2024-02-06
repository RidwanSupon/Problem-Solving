class CopyCons{
	int num1;
	int num2;
	String name;
	int age;
	public CopyCons(int a, int b){
	num1 = a;
	num2 = b;
	}
	
	public CopyCons(CopyCons obj){
	num1 = obj.num1;
	num2= obj.num2;
	
	}
	
	void result(){
	int ans = num1 + num2;
	System.out.println("Summation of two number is: "+ans);
	}
	public static void main(String[] args){
	CopyCons obj1 = new CopyCons(10,20);
	CopyCons obj2 = new CopyCons(obj1);
	obj2.result();
	 
	}
	}
