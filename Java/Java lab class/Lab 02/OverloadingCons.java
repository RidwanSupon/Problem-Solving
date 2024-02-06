class OverloadingCons{
	int id;
	String name;
	int age;
	public OverloadingCons(int x, String y){
	id=x;
	name=y;
	}
	
	public OverloadingCons(int x, String y, int z){
	id=x;
	name=y;
	age=z;
	}
	
	void show(){
	System.out.println(id+ " "+name+" " +age);
	}
	public static void main(String[] args){
	OverloadingCons c1 = new OverloadingCons(101,"Supon");
	OverloadingCons c2 = new OverloadingCons(102,"rster",12);
	c1.show();
	c2.show();
	 
	}
	}
