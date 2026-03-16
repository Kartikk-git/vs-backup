import java.util.Scanner;
public class Fact_07 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number : ");
        int no = sc.nextInt();

        if (no < 0)
        {
            System.out.println("Number can't be negative.");
        }
        else
        {
            long fact = 1;

            for (int i = 1; i <= no; i++)
            {
                fact = fact * i;
            }

            System.out.println("Factorial of " + no + " is: " + fact);
        }

        sc.close();
    }
}
