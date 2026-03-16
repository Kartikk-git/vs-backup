interface Shape{
    void draw();
}

class Circle implements Shape{
    public void draw(){
        System.out.println("Drawing a circle.");
    }
}

class Triangle implements Shape{
    public void draw(){
        System.out.println("Drawing a triangle.");
    }
}

class Rectangle implements Shape{
    public void draw(){
        System.out.println("Drawing a rectangle.");
    }
}

public class DynamicPolymorphism_22{
    public static void main(String[] args){
        Shape s;

        s = new Circle();
        s.draw();

        s = new Rectangle();
        s.draw();

        s = new Triangle();
        s.draw();

    }
}