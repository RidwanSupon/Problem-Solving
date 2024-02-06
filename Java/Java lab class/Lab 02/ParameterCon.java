class ParameterCon{
	int id;
	String name;
	public ParameterCon(int x, String y){
	id=x;
	name=y;
	}
	void show(){
	System.out.println(id+ " "+name);
	}
	public static void main(String[] args){
	ParameterCon c1 = new ParameterCon(101,"Supon");
	ParameterCon c2 = new ParameterCon(102,"rster");
	c1.show();
	c2.show();
	 
	}
	}
