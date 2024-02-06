class Grand{
    void displayGrand() {
        System.out.println("Md. Mokhles Moulobi");
    }
}

class Parent extends Grand {
    void displayParent() {
        System.out.println("Md. Ataur Rahman Mazumder");
    }
}
class Child extends Grand {
    void displayChild() {
        System.out.println("Md. Ridwanur Rahman Mazumder");
    }
}

public class hierarchical{
    public static void main(String[] args) {
        Parent obj1 = new Parent();
        Child obj2= new Child();
        obj1.displayParent();
        obj2.displayChild();
        obj2.displayGrand();
    }
}

