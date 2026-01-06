public class array {
    public static void main(String[] arg){
        int num[] = {5,6,7};
        // System.out.println(num[0]);
        // System.out.println(num[1]); //6
        // System.out.println(num[2]);
        // System.out.println(num[3]); //Error java.lang.ArrayIndexOutOfBoundsException: Index 3 out of bounds for length 3
        num[1] = 10; //change the nums index 1 value is 10
        // System.out.println(num[1]); //10

        // for(int i = 0; i < 3;i++){
        //     System.out.println(num[i]);
        // }

        //create a array with size
        int num1[] = new int[4];
        num1[0] = 10;
        num1[1] = 20;
        num1[2] = 30;
        // num1[3] = 40;
        for(int i = 0; i < 4;i++){
            System.out.println(num1[i]);
        }
    }
}
