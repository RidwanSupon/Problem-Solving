class Grand{
    void displayGrand(){
        System.out.println("Grand Class inherited by parent class");
    }
}

class Parent extends Grand{
    void displayParent(){
        System.out.println("Parent subclass inherited by child class");
    }
}
class Child extends Parent{
    void displayChild(){
        System.out.println("child sub class");
    }
}

public class MultiLevel{
    public static void main(String[] args){
        Parent obj1 = new Parent();
        Child obj2= new Child();
        
        obj1.displayGrand();
        obj2.displayParent();
        obj2.displayChild();
        
    }
}

