import java.util.Scanner;

public class SumOfDigits_18
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int no = scanner.nextInt();
        int sum = 0;

        while (no != 0)
        {
            int digit = no % 10;        // Extract the last digit
            sum = sum + digit;          // Add the digit to the sum
            no = no / 10;               // Remove the last digit
        }

        System.out.println("The sum of the digits is: " + sum);
        scanner.close();
    }
}