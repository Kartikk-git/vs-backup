import java.util.Scanner;

public class GcdOfTwoNumbers_15
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter no1: ");
        int no1 = scanner.nextInt();

        System.out.print("Enter no2: ");
        int no2 = scanner.nextInt();

        int gcd = 1;

        for (int i = 1; i <= no1 && i <= no2; i++)
        {
            if (no1 % i == 0 && no2 % i == 0)
            {
                gcd = i;
            }
        }
        scanner.close();

        System.out.println("GCD: " + gcd);
    }
}