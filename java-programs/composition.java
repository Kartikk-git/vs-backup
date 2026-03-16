class engine{
    engine(){
        System.out.println("Engine class.");
    }
}
class car extends engine{
    engine e = new engine();
}
public class composition{
    public static void main(String[] args )
    {
        new car();
    }
}