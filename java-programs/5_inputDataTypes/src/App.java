import java.util.Scanner;
public class App {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter values for different data types:");
        System.out.print("byte: ");
        byte b = sc.nextByte();
        System.out.print("short: ");
        short s = sc.nextShort();
        System.out.print("int: ");
        int n = sc.nextInt();
        System.out.print("long: ");
        long l = sc.nextLong();
        System.out.print("float: ");
        float f = sc.nextFloat();
        System.out.print("double: ");
        double d = sc.nextDouble();
        System.out.print("char: ");
        char ch = sc.next().charAt(0);
System.out.print("boolean: ");
        boolean flag = sc.nextBoolean();

        System.out.println(b);
        System.out.println(s);
        System.out.println(n);
        System.out.println(l);
        System.out.println(f);
        System.out.println(d);
        System.out.println(ch);
        System.out.println(flag);
    }
}
