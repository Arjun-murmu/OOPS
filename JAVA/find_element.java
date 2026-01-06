import java.util.Scanner;
public class find_element {
    public static void main(String arg[]){
        int nums[] = {3,1,5,7,9,4};
        // int key = 4;
        boolean yes = false;
        int index = -1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a key : ");
        int key = sc.nextInt();
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == key){
                yes = true;
                index = i;
                break;
                // System.out.println(i);
            }
        }
        if(yes){
            System.out.println("Element Found index no is : " + index);
        }
        else{
            System.out.println("Not Found.");
        }

        //User input array : 
        System.out.print("Enter a array size : ");
        int arr_size = sc.nextInt();
        int arr[] = new int[arr_size];
        for(int i = 0; i < arr.length;i++){
            System.out.print("Enter arr  [" + (i+1) + "] : ");
            arr[i] = sc.nextInt();
            // System.out.println();
        }
        //output
        for(int n : arr){
            System.out.print(n + " ");
        }

    }
}
