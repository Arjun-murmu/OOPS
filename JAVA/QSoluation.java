import java.util.Scanner;
class Soluation{
    public void prime_number(int n){
        if(n <= 1){
            System.out.println("Not Prime");
            return;
        }
        boolean isPrime = true;

        for(int i = 2; i < n;i++){
            if((n % i) == 0){
                isPrime = false;
                // System.out.println(i);
                break;
            }
        }
        if(isPrime){
            System.out.println("Prime : " + n);
        }
        else{
            System.out.println("Not Prime : " + n);
        }
       
    }
    public void palindrom_no(int n){
        int original_number = n;
        int reverse_number = 0;
        while(n > 0){
            int rem = n % 10;
            reverse_number = reverse_number * 10 + rem;
            n = n / 10;
        }
        if(original_number == reverse_number){
            System.out.println("Palindram Number.");
        }
        else{
            System.out.println("Not Palindram.");
        }
    }
}
public class QSoluation {
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);
        Soluation obj = new Soluation();
        int n = sc.nextInt();
        for(int i = 2; i < n; i++){
            obj.prime_number(i);
        }
        int number = sc.nextInt();
        obj.palindrom_no(number);
        sc.close();
        }
    }
