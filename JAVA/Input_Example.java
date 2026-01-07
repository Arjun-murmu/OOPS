import java.util.Scanner;

class Student_details{
    public void student(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your name : ");
        String name = sc.nextLine();
        System.out.print("Enter your Registration No : ");
        String regd_no = sc.nextLine();
        System.out.print("Enter your age: ");
        int age = sc.nextInt();
        System.out.print("Enter your cgpa : ");
        float cgpa = sc.nextFloat();

        System.out.println("\n --- Student Details ---");
        System.out.println("Name : " + name);
        System.out.println("Registration No : " + regd_no);
        System.out.println("Age : " + age);
        System.out.println("Cgpa : " + cgpa);

        sc.close();

    }

}
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
       System.out.print("Floating number input : ");
       float f = scan.nextFloat();

        // Write your code here.

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
        System.out.println("Float : " + f);

        //Student details print
        Student_details obj = new Student_details();
        obj.student();

        scan.close();
    }
}