class Super {
    void displaySuper() {
        System.out.println("Super class");
    }
}

class Sub extends Super {
    void displaySub() {
        System.out.println("Sub Class");
    }
}

public class SingleInheritance {
    public static void main(String[] args) {
        Sub obj = new Sub();
        obj.displaySub();
        obj.displaySuper();
    }
}

