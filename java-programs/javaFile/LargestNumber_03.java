import java.util.Scanner;

public class LargestNumber_03
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the numbers :");
        System.out.print("A : ");
        int a = sc.nextInt();

        System.out.print("B : ");
        int b = sc.nextInt();

        System.out.print("C : ");
        int c = sc.nextInt();

        if (a > b && a > c)
        {
            System.out.println("Lasrgest number is " + a);
        }
        else if (b > a && b > c)
        {
            System.out.println("Largest number is " + b);

        }
        else if (c > a && c > b)
        {
            System.out.println("Largest number is " + c);
        }
        else
        {
            System.out.println("All numbers are equal.");
        }
        sc.close();
    }
}