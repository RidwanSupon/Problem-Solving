import java.util.Scanner;
public class Circle{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		double radius;
		double area=1;
		double perimeter=0;
		
		System.out.println("Enter the radius of Circle: ");
		radius = scanner.nextDouble();
		area = 3.1416*radius;
		perimeter= 2*3.1416*radius;
		System.out.println("Area of the circle is: "+ area);
		System.out.println("Perimeter of the circle is: "+ perimeter);

		}
	
	}
