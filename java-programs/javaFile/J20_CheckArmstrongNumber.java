import java.util.Scanner;

public class CheckArmstrongNumber_20
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int no = scanner.nextInt();

        int originalNumber = no;
        int sum = 0;

        // Calculate the number of digits
        int temp = no;
        int digits = 0;
        while (temp != 0)
        {
            digits++;
            temp = temp / 10;
        }

        while (no != 0)
        {
            int rem = no % 10;
            int mul = 1;

            // Calculate rem^digits using a basic loop
            for (int i = 0; i < digits; i++)
            {
                mul = mul * rem;
            }

            sum = sum + mul;
            no = no / 10;
        }

        if (sum == originalNumber)
        {
            System.out.println(originalNumber + " is an Armstrong number.");
        }
        else
        {
            System.out.println(originalNumber + " is not an Armstrong number.");
        }
        scanner.close();
    }
}