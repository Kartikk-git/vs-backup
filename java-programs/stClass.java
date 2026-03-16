class vehical{
      static void info(){
        System.out.println("this is a vehical");
    }
}
class car extends vehical{
    static void info(){
        System.out.println("this is a car");
    }
}


public class stClass {
    public static void main(String[] args) {
        car.info();
        vehical.info();
        vehical v = new car();
        v.info();
    }
    
}
