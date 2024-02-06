class Vehicle {
    void drive(){
        System.out.println("drive from vehicle class");
    }
}

class Car extends Vehicle{
    void honk(){
        System.out.println("Car is honking");
    }
}

class BMW extends Car{
    void luxuryFeatures(){
        System.out.println("BMW Car");
    }
}
class Bike extends Vehicle{
    void speed(){
        System.out.println("Motorcycle boom boom");
    }
}

public class All{
    public static void main(String[] args){
        Car myCar = new Car();
        myCar.drive();
        myCar.honk(); 

        BMW bmw = new BMW();
        bmw.drive();
        bmw.honk();
        bmw.luxuryFeatures(); 
        
        Bike myMotorcycle = new Bike();
        myMotorcycle.drive(); 
        myMotorcycle.speed(); 
    }
}

