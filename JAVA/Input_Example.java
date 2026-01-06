import java.util.Scanner;

public class Input_Example {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter number : ");
        int i = scan.nextInt();
        scan.nextLine();
        System.out.print("Enter (Double) cgpa : ");
        double d = scan.nextDouble();
        scan.nextLine();
        System.out.print("Enter Your name : ");
        String s = scan.nextLine();
        

        // Write your code here.

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}