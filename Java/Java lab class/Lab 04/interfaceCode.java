interface implement{
	void myInfo();
	void fatherInfo();
	void motherInfo();
	
}
abstract class Myinfo implements implement{
	public void myInfo(){
	System.out.println("Hello It's Ridwanur Rahman Mazumder");
	System.out.println("I am a future programmer/developer in BD");
	System.out.println("Thanks for meet me");
	
	}
}
abstract class Fatherinfo extends Myinfo{
	public void fatherInfo(){
	System.out.println("Hello It's Ridwanur Rahman Mazumder's Father");
	System.out.println("Mr. Ataur Rahman Mazumder");
	}
}

class Motherinfo extends Fatherinfo{
	public void motherInfo(){
	System.out.println("Hello It's Ridwanur Rahman Mazumder's Mother");
	System.out.println("Mrs. Ferdousi Rahman Mazumder");
	}
}
class interfaceCode{
	public static void main(String[] args){
	Motherinfo obj = new Motherinfo();
	obj.myInfo();
	obj.fatherInfo();
	obj.motherInfo();
	
	}
}
