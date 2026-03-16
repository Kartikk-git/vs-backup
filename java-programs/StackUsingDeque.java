import java.util.ArrayDeque;
import java.util.Deque;
public class StackUsingDeque {
    
    public static void main(String[] args) {
        Deque<Integer> stack = new ArrayDeque<>();

        stack.push(10);
        stack.push(20);
        stack.push(30);

        System.out.println("Stack after pushing elements: " + stack);

        int poppedElement = stack.pop();
        System.out.println("Popped element: " + poppedElement);

        int topElement = stack.peek();
        System.out.println("Top element: " + topElement);

     
        boolean isEmpty = stack.isEmpty();
        System.out.println("Is the stack empty? " + isEmpty);
    }
}           

