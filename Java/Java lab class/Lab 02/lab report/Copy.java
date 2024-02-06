class Copy{
	int id;
	String name;
	
	public Copy(Copy element){
	this.id = element.id;
	this.name = element.name;
	}
	
	public Copy(int x, String s){
	this.id = x;
	this.name = s;
	}
	
	
	void show(){
	System.out.println("Name: "+name+" Id: "+id);
	}
	public static void main(String[] args){
	Copy parameter = new Copy(79,"Supon");
	Copy copy = new Copy(parameter);
	parameter.show();
	copy.show();
	 
	}
	}
