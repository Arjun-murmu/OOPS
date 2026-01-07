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
}
public class QSoluation {
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);
        Soluation obj = new Soluation();
        int n = sc.nextInt();
        for(int i = 2; i < n; i++){
            obj.prime_number(i);
        }
        }
    }
