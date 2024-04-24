import java.util.*;
class UserefinedE{
public static void main(String [] args){
try{
    throw new NewException(20);
}
catch(NewException e){System.out.println(e);}
}
}
class NewException extends Exception{
    int x;
    NewException(int a){x=a;
        System.out.println("Exception Value is ="+a);
    }
}