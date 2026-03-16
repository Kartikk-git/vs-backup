class parent{
    parent(int x){
        System.out.println("This is parent class constructor with argument: " + x);
    }
}
class child extends parent{
    child(){
        super(5);
        System.out.println("This is child class constructor");
    }
}
public class app {
    public static void main(String[] args) {
        new child();
    }
}