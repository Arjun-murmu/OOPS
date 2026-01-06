class Calculator{
    int num = 5; //intance variable
    //n1, n2, n3 is called local variable
    public int add(int n1, int n2, int n3){
        return n1+n2+n3;
    }
    public int add(int n1, int n2){
        System.out.println(num);
        return n1+n2;
    }
    public double add(double n1, int n2){
        return n1+n2;
    }
    public float add(float n1, int n2){
        return n1+n2;
    }
}
public class method0verload {
    public static void main(String arg[]){
        int num1 = 10;
        int num2 = 2;
        Calculator obj = new Calculator();
        Calculator obj1 = new Calculator();

        obj.num = 2; //Change the num value
        int sum = obj.add(num1,num2);
        System.out.println(sum);
        
        obj1.num = 10; //Change the num value in main part
        int sum1 = obj1.add(4,5);
        System.out.println(sum1);
    }
}
