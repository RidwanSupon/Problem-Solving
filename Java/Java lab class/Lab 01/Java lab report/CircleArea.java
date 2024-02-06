import java.util.Scanner;

class ReturnValue{
	double Area=0;
	double ReturnArea(double n){
		Area=3.1416*n*n;
		
		return Area;
	}
}

class CircleArea{
	public static void main(String[] args){
		Scanner obj= new Scanner(System.in);
		ReturnValue Area = new ReturnValue();
		System.out.println("Enter the radius: ");
		double input = obj.nextDouble();
		double output = Area.ReturnArea(input);
		
		System.out.println("Area of the Circle is: "+ output);
	}
}
