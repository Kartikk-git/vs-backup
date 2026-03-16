import java.util.Scanner;
public class prime_12 {
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int num = sc.nextInt();

        sc.close();
        if (num <= 1)
        {
            System.out.println(num + " is not a prime number.");
            return;
            
        }

        boolean isPrime = true;

        for (int i=2; i < num/2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            System.out.println(num + " is a prime number.");
        }
        else
        {
            System.out.println(num + " is not a prime number.");
        }
        
    }
}

