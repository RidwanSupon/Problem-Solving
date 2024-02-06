class Copycons{
	int id;
	String name;
	int age;
	public Copycons(int x, String y){
	id=x;
	name=y;
	}
	
	public Copycons(Copycons obj){
	id = obj.id;
	name= obj.name;
	
	}
	
	void show(){
	System.out.println(id+ " "+name);
	}
	public static void main(String[] args){
	Copycons c1 = new Copycons(101,"Supon");
	Copycons c2 = new Copycons(c1);
	c1.show();
	c2.show();
	 
	}
	}
