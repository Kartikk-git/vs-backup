import java.util.Scanner;

public class LcmOfTwoNumbers_16
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter no1: ");
        int no1 = scanner.nextInt();

        System.out.print("Enter no2: ");
        int no2 = scanner.nextInt();

        int lcm = no1;

        if (no2 > no1)
        {
            lcm = no2;
        }

        while (true)
        {
            if (lcm % no1 == 0 && lcm % no2 == 0)
            {
                System.out.println("LCM: " + lcm);
                break;
            }
            lcm++;
        }
        scanner.close();
    }
}