import java.util.Stack;
import java.util.Queue;
import java.util.LinkedList;

public class stackAndQueue_21 {
    public static void main(String[] args) {
        // --- Stack implementation ---
        Stack<Integer> stack = new Stack<>();

        // Push(add)
        stack.push(10);
        stack.push(20);
        stack.push(30);

        System.out.println("Stack after pushing elements: " + stack);

        // Pop (deleteing)
        int poppedElement = stack.pop();
        System.out.println("Popped element: " + poppedElement);

        // Peek top element
        int topElement = stack.peek();
        System.out.println("Top element: " + topElement);

        // To check if stack ia empty
        boolean isEmpty = stack.isEmpty();
        System.out.println("Is the stack empty? " + isEmpty);

        
        // --- Queue demonstration ---
        Queue<Integer> queue = new LinkedList<>();

        // Enqueue elements
        queue.add(100);
        queue.add(200);
        queue.add(300);

        System.out.println("Queue after enqueuing elements: " + queue);

        // Dequeue element
        Integer dequeued = queue.remove();
        System.out.println("Dequeued element: " + dequeued);

        // Peek front element
        Integer front = queue.peek();
        System.out.println("Front element: " + front);

        // offer (safe add)
        queue.offer(400);

        System.out.print("Final queue =" + queue);


    }
}           