import java.util.Scanner;

public class App {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int balance = 0;
        int choice;

        while (true)
        {
            System.out.println("Select one option from the following: ");
            System.out.println("1. Check balance\n2. deposite money\n3. Withdraw money\n4. Exit");
            System.out.print("Enter your choice :");
            choice = sc.nextInt();

            switch(choice){
               
                case 1:
                    System.out.println("Current balance : " + balance);
                    break;  
                case 2:
                    System.out.print("Enter the amount to deposite : ");
                    int money = sc.nextInt();
                    if(money>0)
                    {
                        balance = balance + money;
                        break;
                    }
                    else
                    {
                        System.out.println("Error!!");
                    }
                case 3:
                    System.out.print("Enter the amount to withdraw:");
                    int with = sc.nextInt();
                    if(with > 0 && with <= balance)
                    {
                        balance = balance - with;
                        System.out.println("Amount withdrawn");
                    }
                    else if(with <= 0)
                    {
                        System.out.println("invalid amount");
                    }
                    else
                    {
                        System.out.print("Invalid!!");
                    }
                case 4:
                    System.out.println("Exiting...");
                    return;
                default:
                    System.out.println("Invalid choice");

            }
        }
    }
  
}
