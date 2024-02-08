interface A{

    void draw();
    }
    class Rectangle implements A{
    public void draw(){System.out.println("Drawing rectangle");}
    }
    class Circle implements A{
    public void draw(){System.out.println("Drawing circle");}
    }
    class Interface1{
    public static void main(String args[]){
    A d=new Circle();
    A e=new Rectangle ();
    d.draw();
    e.draw();
    }
    }
