class parent{
    parent(){
        System.out.println("Parent construct.");
    }

}
class child extends parent{
    child(){
        super();
        System.out.println("Child constructor."); 
    }

}
public class constructorChaining{
    public static void main(String[] args){
        new child();
    }
}