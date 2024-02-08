interface Exam{
	void examSpring();
	void examSummer();
	void examFall();
}

abstract class Spring implements Exam{
	public void examSpring(){
	System.out.println("Spring admission going on");
	} 
}
class Summer extends Spring{
	public void examSummer(){
	System.out.println("Summer admission going on");
	}
	public void examFall(){
	System.out.println("Fall admission going on");
	}
	public static void main(String[] args){
	Summer obj = new Summer();
	obj.examSpring();
	obj.examSummer();
	obj.examFall();
	}
}

