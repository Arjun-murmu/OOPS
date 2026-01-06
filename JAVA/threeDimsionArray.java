public class threeDimsionArray {
    public static void main(String arg[]){
        System.out.println("Jagged array used : ");
        int number[][][] = new int[4][][];
        number[0] = new int[4][];
        number[1] = new int[3][];
        number[2] = new int[2][];
        number[3] = new int[1][];

        // number[0][0] = new int[2];
        // number[0][1] = new int[3];

        // number[1][0] = new int[1];
        // number[1][1] = new int[4];

        // number[2][0] = new int[2];
        // number[2][1] = new int[5];

        // number[3][0] = new int[3];

         // Initialize 3rd dimension
        for (int i = 0; i < number.length; i++) {
            for (int j = 0; j < number[i].length; j++) {
                number[i][j] = new int[j + 1]; // jagged third dimension
            }
        }

        // Assign random values
        for(int i = 0; i < number.length; i++){
            for(int j = 0; j < number[i].length;j++){
                for(int k = 0; k < number[i][j].length; k++){
                    number[i][j][k] = (int)(Math.random() * 5);
                    // number[i][j][k] = '*';
                }
            }
        }

         // Print values
        for(int n[][] : number){
            for(int m[] : n){
                for(int o : m){
                    System.out.print(o + " ");
                }
                System.out.println();
            }
            System.out.println();
        }
    }
}
