class person{
    String name = "Abc";
    void show(){
        System.out.println("this is person class method");
    }
    person()
    {
        System.out.println("This is person class constructor");
    }

}
class student extends person{
    String name = "John";
    void display(){
        System.out.println("Student Name: " + this.name);
        System.out.println("Person Name: " + super.name);
        this.show();
        super.show();
    }
    student(){
        super();
        System.out.println("This is student class constructor");
        
    }
}
public class thisAndSuper {
    public static void main(String[] args) {
        student s = new student();
        s.display();


    }
}