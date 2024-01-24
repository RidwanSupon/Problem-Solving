class Room{

float length;
float width;

float getArea(float x,float y){
	float area=0;
	area = x*y;
	return area;
	
   }

}

class Area{
public static void main(String[] args){
	Room room1=new Room();
	float result = room1.getArea(15,10);
	System.out.println("The Area of the Room: "+result);
  }
}
