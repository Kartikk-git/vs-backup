import java.util.Scanner;

public class DigitCounter_17
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int no = scanner.nextInt();
        int count = 0;

        while (no != 0)
        {
            no = no / 10;
            count++;
        }

        System.out.println("The number of digits is: " + count);
        scanner.close();
    }
}