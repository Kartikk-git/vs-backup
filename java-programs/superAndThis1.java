class parent 
{
    int x = 12;
    parent(){
        System.out.println("");
    }
}
class child extends parent{
    int x = 15;
    child(){
        System.out.println("Access child variable : " + this.x);
        System.out.println("Access parent variable : " + super.x);
    }
}   
public class superAndThis1 {
    public static void main(String[] args){
        new child();
    }
    
}
