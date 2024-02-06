class Son{
	String name;
	String address;
	String phn_num;
	void show_child(String Name, String Address, String Phone){
	System.out.println("C_Name: "+Name+" Address: "+Address+" Phone num: "+Phone);
	}
}
class Father extends Son{
	String name;
	int Age;
	void show_father(String Name, int Age){
	System.out.println("Father name: "+Name+" Age: "+Age);
	}
	
public static void main(String[] args){
	Father obj = new Father();
	obj.show_child("Pritom","Bangladesh","015454754575");
	
	obj.show_father("Rafiiiiik",22);
}
	
}
