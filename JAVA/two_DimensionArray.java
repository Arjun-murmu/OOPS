public class two_DimensionArray {
    public static void main(String arg[]){
        int nums[][] = new int[3][4];
        // nums[0][0] = 10;
        // nums[0][1] = 11;
        // nums[0][2] = 12;
        // nums[0][3] = 13;
        // nums[1][0] = 20;
        // nums[1][1] = 21;
        // nums[1][2] = 22;
        // nums[1][3] = 23;
        // nums[2][0] = 30;
        // nums[2][1] = 31;
        // nums[2][2] = 32;
        // nums[2][3] = 33;
        // for(int i = 0; i < 3; i++){
        //     for(int j = 0; j < 4; j++){
        //         System.out.print(nums[i][j] + " ");
        //     }
        //     System.out.println();
        // }

        //Random value used 
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
                nums[i][j] = (int)(Math.random() * 10);
                System.out.print(nums[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Enhance array used : ");
        //Enhance array
        for(int n[] : nums){
            for(int m : n){
                System.out.print(m + " ");
            }
            System.out.println();
        }

        //Jagged Array
        System.out.println("Jagged array used : ");
        int number[][] = new int[4][];
        number[0] = new int[4];
        number[1] = new int[3];
        number[2] = new int[2];
        number[3] = new int[1];

        for(int i = 0; i < number.length; i++){
            for(int j = 0; j < number[i].length;j++){
                number[i][j] = (int)(Math.random() * 5);
            }
        }
        for(int n[] : number){
            for(int m : n){
                System.out.print(m + " ");
            }
            System.out.println();
        }
    }
}
