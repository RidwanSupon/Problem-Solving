class ThisConst{
	int num1;
	int num2;
	public ThisConst(ThisConst element){
	this.num1 = element.num1;
	this.num2 = element.num2;
	}
	
	public ThisConst(int x, int s){
	this.num1= x;
	this.num2 = s;
	}
	
	
	void show(){
	double mult = num1 * num2;
	System.out.println(+mult);
	}
	public static void main(String[] args){
	ThisConst ob1 = new ThisConst(5,9);
	ThisConst ob2 = new ThisConst(ob1);
	ob2.show();
	 
	}
	}
