class calculator{ //class
    int a; //variable
    public int add(int n1, int n2){ // method
        int r = n1+n2;
        // System.out.println("Add the two number.");
        return r;
    }
    public int sub(int n1, int n2){
        return n1-n2;
    }
    public int mul(int n1, int n2){
        return n1*n2;
    }
    public int div(int n1, int n2){
        return n1/n2;
    }
}
public class demo{
    public static void main(String a[]){
        int num1 = 10;
        int num2 = 2;
        // int sum = num1 + num2;
        // System.out.println("Sum of two number : " + sum);

        //call the class
        calculator clac = new calculator();
        // clac.add();
        int sum = clac.add(num1,num2);
        System.out.println("Sum of number : " + sum);

        int sub = clac.sub(num1, num2);
        System.out.println("Substraction : " + sub);

        int mul = clac.mul(num1, num2);
        System.out.println("Multiplication : " + mul);

        int div = clac.div(num1, num2);
        System.out.println("Division of number : " + div);
        
    }
}