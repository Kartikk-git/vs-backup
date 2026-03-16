interface Application{
    void turnON();
    default void showBrand(){
        System.out.println("this is a default method");
    }
}
class WashingMachine implements Application{
    @Override
    public void turnON(){
        System.out.println("turning on the washing machine");
    }
    @Override
    public void showBrand(){
        System.out.println("this is a washing machine");
    }
}

public class IntOverride {
    public static void main (String[] args )    {
        WashingMachine wm = new WashingMachine();
        wm.turnON();
        wm.showBrand();
    }
    
}
