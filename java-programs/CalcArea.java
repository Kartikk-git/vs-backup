interface shape{
    void area();
}
class circle implements shape{
    int r;
    public void area(){
        System.out.println("Area of circle: " + 3.14*r*r);
    }
}
class rectangle implements shape{
    int l,b;
    public void area(){
        System.out.println("Area of rectangle: " + l*b);
    }
}
public class CalcArea {
    public static void main(String[] args) {
        circle c = new circle();
        c.r=10;
        c.area();
        rectangle r = new rectangle();
        r.l=5;
        r.b=10;
        r.area();
    }
    
}
