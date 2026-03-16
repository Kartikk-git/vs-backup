import java.util.Scanner;

public class largestOfTwo_02 {
    public static void main (String [] args)
    {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the first number :");
        int no1 = sc.nextInt();

        System.out.print("Enter the second number :");
        int no2 = sc.nextInt();

        if(no1 > no2)
        {
            System.out.println("First numeber " + no1 + " is bigger than " + no2);

        }
        else if (no2 > no1)
        {
            System.out.println("Second number " + no2 + " is bigger than " + no1);

        }
        else 
        {
            System.out.println("Both numbers are equal.");

        }

        sc.close();
    }
}
