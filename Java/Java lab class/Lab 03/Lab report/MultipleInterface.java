interface config1{

    void print();
  
  }
  
  interface config2{
  
    void show();
  
  }
  
  class MultipleInterface implements config1,config2{
    public void print(){
      System.out.println("Config 1");
    }
    public void show(){
      System.out.println("config 2");
    }
  
    public static void main(String args[])
    {
      MultipleInterface obj = new MultipleInterface();
      obj.print();
      obj.show();
    }
  }
