import java.util.Scanner;

public class Palindrome_11 {
        public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int rev = 0;
        int temp = num;

        while (num != 0)
        {
            rev = rev * 10 + num % 10;
            num = num / 10; 
        }

        if (temp == rev)
        {
            System.out.println(temp + " is a Palindrome number.");
        }
        else
        {
            System.out.println(temp + " is not a Palindrome number.");
        }
        
        sc.close();
    }
    
}
